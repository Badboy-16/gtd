#include <sqlite3.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "db.h"

int main() {
    return 0;
}

/* Create database file if not exists */
void create_db() {
    char * home_path = getenv("HOME");
    char * db_file_path = strcat(home_path, "/.gtd.db");

    sqlite3 * dbptr;
    sqlite3_open(db_file_path, &dbptr);
    sqlite3_close(dbptr);
}
