
//day18.2- 100 days of code
// Write a program to find the HCF (GCD) of two numbers.
//tanaysah

#include <stdio.h>

int main() {
    int a, b, i, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }

    printf("HCF: %d\n", hcf);
    return 0;
}
