
//day21.2- 100 days of code
// Write a program to check if a number is a perfect number.
//tanaysah

#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("%d is a Perfect Number\n", num);
    else
        printf("%d is not a Perfect Number\n", num);

    return 0;
}
