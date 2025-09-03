// Day 13.1 - 100 days of code
// WAP to make a basic calculator


#include <stdio.h>

int main() {
    int a, b, total;
    char op;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &op);  // notice the space before %c

    printf("Enter the second number: ");
    scanf("%d", &b);

    switch (op) {
        case '+':
            total = a + b;
            printf("Result: %d\n", total);
            break;

        case '-':
            total = a - b;
            printf("Result: %d\n", total);
            break;

        case '*':
            total = a * b;
            printf("Result: %d\n", total);
            break;

        case '/':
            if (b != 0) {
                total = a / b;
                printf("Result: %d\n", total);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
