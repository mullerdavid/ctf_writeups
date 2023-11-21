<@
    register_error_handler("../includes/error.inc");
    if (QUERY_STRING)
        parse_query(QUERY_STRING);
    if (POST_PATH && HTTP_CONTENT_TYPE == "application/x-www-form-urlencoded")
    {
        parse_query(read_file(".." . POST_PATH));
    }
@>