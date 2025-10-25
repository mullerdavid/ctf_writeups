import server

now = 1760695200 # 2025.10.17. 12:00:00 GMT+02:00

dist = {}

for i in range(100000):
    cur = server.color_service.predict_index(now+4, window_seconds=2)
    if cur in dist:
        dist[cur] += 1
    else:
        dist[cur] = 1
    now += 2

for k,v in dist.items():
    print(server.COLORS[k], v)