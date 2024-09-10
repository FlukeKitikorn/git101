#ifndef CREATE_H
#define CREATE_H

#include <stdio.h>
#include "user.h"

void createUser() {
    if (userCount >= MAX_USERS) {
        printf("Can't crate Full partition\n");
        return;
    }

    User newUser;
    newUser.id = userCount + 1;
    printf("Enter name: ");
    scanf("%s", newUser.name);
    printf("Enter Email: ");
    scanf("%s", newUser.email);

    users[userCount] = newUser;
    userCount++;

    printf("Success!\n");
}

#endif // CREATE_USER_H
