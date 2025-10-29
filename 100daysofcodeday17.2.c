
//day17.2- 100 days of code
// Write a program to check if a number is prime.
//tanaysah
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
        isPrime = 0;

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("Prime number\n");
    else
        printf("Not a prime number\n");

    return 0;
}
