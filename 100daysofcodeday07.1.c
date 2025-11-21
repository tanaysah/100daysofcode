//day 7.1 - 100 days of code
// wap to input a year and check wheter it is a leap year or not
// leap year is divisible by 4 but not by 100 except if it is also divisible by 400

#include <stdio.h>

int main() {
    int year;
    
    printf("YEAR: ");
    scanf("%d", &year);
    
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("LEAP YEAR\n");
    } 
    else 
    {
        printf("NOT LEAP YEAR\n");
    }
    
    return 0;
}
