//day89- 100 days of code
//Show that enums store integers by printing assigned values.

//tanaysah

#include <stdio.h>

enum Gender {
    MALE,    // 0
    FEMALE,  // 1
    OTHER    // 2
};

int main() {
    printf("MALE = %d\n", MALE);
    printf("FEMALE = %d\n", FEMALE);
    printf("OTHER = %d\n", OTHER);

    // You can also assign custom values
    enum Status { PENDING = 10, APPROVED = 20, REJECTED = 30 };
    printf("PENDING = %d\n", PENDING);
    printf("APPROVED = %d\n", APPROVED);
    printf("REJECTED = %d\n", REJECTED);

    return 0;
}