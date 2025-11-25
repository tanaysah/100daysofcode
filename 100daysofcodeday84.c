//day84- 100 days of code
//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

//tanaysah
#include <stdio.h>

// Define enum for status codes
enum Status {
    SUCCESS,  // 0
    FAILURE,  // 1
    TIMEOUT   // 2
};

int main() {
    enum Status code;
    int input;

    printf("Enter status code (0 = SUCCESS, 1 = FAILURE, 2 = TIMEOUT): ");
    scanf("%d", &input);

    // Assign enum based on input
    if (input == 0)
        code = SUCCESS;
    else if (input == 1)
        code = FAILURE;
    else
        code = TIMEOUT;

    // Print message based on status
    switch(code) {
        case SUCCESS:
            printf("Operation completed successfully!\n");
            break;
        case FAILURE:
            printf("Operation failed. Please try again.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out. Try later.\n");
            break;
        default:
            printf("Invalid status code!\n");
    }

    return 0;
}