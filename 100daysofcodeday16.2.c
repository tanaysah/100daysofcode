
//day16.2- 100 days of code
//Write a program to check if a number is a palindrome.
//tanaysah


#include <stdio.h>

int main() {
    int num, rev = 0, original, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    if (original == rev)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
