//day85- 100 days of code
//Assign explicit values starting from 10 and print them.

//tanaysah
#include <stdio.h>

// Enum with explicit values starting from 10
enum Operation {
    ADD = 10,
    SUBTRACT,   // 11
    MULTIPLY    // 12
};

int main() {
    printf("Enum Values:\n");
    printf("ADD = %d\n", ADD);
    printf("SUBTRACT = %d\n", SUBTRACT);
    printf("MULTIPLY = %d\n", MULTIPLY);

    return 0;
}