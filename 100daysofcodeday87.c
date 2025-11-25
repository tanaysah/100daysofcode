//day87- 100 days of code
//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

//tanaysah

#include <stdio.h>

// Define enum for user roles
enum UserRole {
    ADMIN,  // 0
    USER,   // 1
    GUEST   // 2
};

int main() {
    enum UserRole role;
    int choice;

    printf("Select your role (0 = ADMIN, 1 = USER, 2 = GUEST): ");
    scanf("%d", &choice);

    // Assign role based on choice
    if (choice == 0)
        role = ADMIN;
    else if (choice == 1)
        role = USER;
    else
        role = GUEST;

    // Display message based on role
    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Hello, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Hi, Guest! You have guest access.\n");
            break;
        default:
            printf("Invalid role selected.\n");
            break;
    }

    return 0;
}