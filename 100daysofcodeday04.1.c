//day 4.1 - 100 days of code
// wap to swap two number without using third

#include <stdio.h>
int main()
{
    int no1, no2,c;
    printf("Enter the first number:");
    scanf("%d", &no1);
    printf("Enter the second number:");
    scanf("%d", &no2);
    c=no1;
    no1=no2;
    no2=c;
    printf("Number swapped successfully %d, %d \n", no1, no2);
    
}
