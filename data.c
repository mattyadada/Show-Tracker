#inlcude <stdio.h>
#include <postgresql/libpq-fe.h>
#include <string>

int data()
{
    PGconn *conn;
    PGresult *res;
    int rec_count;
    int row;
    int col;

    conn = PQconnectdb("dbnam=ljdata host=localhost user =dataman password=supersecret");
    
}
