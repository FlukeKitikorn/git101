#include <stdio.h>
#include <stdlib.h>
#include "user.h"

User users[MAX_USERS];
int userCount = 0;

int main() {
    int choice;
    while (1) {
        printf("\nUser management\n");
        printf("1.Add (Create)\n");
        printf("2.Show(Read)\n");
        printf("3.Exit\n");
        printf("choose: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createUser();
                break;
            case 2:
                //listUsers();
                break;
            case 3:
                exit(0);
            default:
                printf("Error\n");
        }
    }

    return 0;
}
