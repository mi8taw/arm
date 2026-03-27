#include <stdio.h>
#include <stdlib.h>
#include "db.h"

int main() {
    sqlite3 *db;
    if (!init_db(&db)) return 1;

    int choice, id;
    char title[100], content[500];

    while (1) {
        printf("\n--- CMS Menu ---\n");
        printf("1. Create Post\n2. List Posts\n3. View Post\n4. Update Post\n5. Delete Post\n0. Exit\n> ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Title: ");
                scanf(" %[^\n]", title);
                printf("Content: ");
                scanf(" %[^\n]", content);
                create_post(db, title, content);
                break;

            case 2:
                list_posts(db);
                break;

            case 3:
                printf("Enter ID: ");
                scanf("%d", &id);
                get_post(db, id);
                break;

            case 4:
                printf("Enter ID: ");
                scanf("%d", &id);
                printf("New Title: ");
                scanf(" %[^\n]", title);
                printf("New Content: ");
                scanf(" %[^\n]", content);
                update_post(db, id, title, content);
                break;

            case 5:
                printf("Enter ID: ");
                scanf("%d", &id);
                delete_post(db, id);
                break;

            case 0:
                close_db(db);
                return 0;
        }
    }
}
