
//day18.1- 100 days of code
// Write a program to print all factors of a given number.
//tanaysah

#include <stdio.h>

int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors: ");
    for (i = 1; i <= num; i++) {
        if (num % i == 0)
            printf("%d ", i);
    }

    return 0;
}
