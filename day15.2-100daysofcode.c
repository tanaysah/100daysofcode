// Day 15.2 - 100 days of code
// WAP to reverse a number

#include <stdio.h>
int main()
{
    signed int num, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    printf("Reversed Number: %d\n", rev);
    return 0;
}

