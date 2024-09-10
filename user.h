// user.h

#ifndef USER_H
#define USER_H

#define MAX_USERS 100

typedef struct {
    int id;
    char name[50];
    char email[50];
} User;

extern User users[MAX_USERS];
extern int userCount;

// ประกาศฟังก์ชัน
// #include "create_user.h"
// #include "list_users.h"

#endif // USER_H
