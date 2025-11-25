//day86- 100 days of code
//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

//tanaysah
#include <stdio.h>

// Enum for menu choices
enum Operation {
    ADD = 1,       // Assigning 1 for easier menu selection
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Operation choice;
    int a, b;

    // Display menu
    printf("Select an operation:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Perform operation using switch
    switch(choice) {
        case ADD:
            printf("Result: %d + %d = %d\n", a, b, a + b);
            break;
        case SUBTRACT:
            printf("Result: %d - %d = %d\n", a, b, a - b);
            break;
        case MULTIPLY:
            printf("Result: %d * %d = %d\n", a, b, a * b);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}