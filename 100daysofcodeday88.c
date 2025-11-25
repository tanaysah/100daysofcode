//day88- 100 days of code
//Print all enum names and integer values using a loop.

//tanaysah

#include <stdio.h>

enum Gender {
    MALE,    // 0
    FEMALE,  // 1
    OTHER    // 2
};

int main() {
    // Array of strings corresponding to enum values
    const char *genderNames[] = {"MALE", "FEMALE", "OTHER"};
    
    // Number of enum elements
    int numGenders = sizeof(genderNames) / sizeof(genderNames[0]);

    printf("Enum Names and their Integer Values:\n");
    for (int i = 0; i < numGenders; i++) {
        printf("%s = %d\n", genderNames[i], i);
    }

    return 0;
}