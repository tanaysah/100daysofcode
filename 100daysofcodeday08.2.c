//day 8.2- 100 days of code
//wap to input three numbers and find the largets among them using ifelse

#include <stdio.h>

int main() 
{
    int no1,no2,no3;
    printf("Enter the first number: ");
    scanf("%d", &no1);
    printf("Enter the second number: ");
    scanf("%d", &no2);
    printf("Enter the third number: ");
    scanf("%d", &no3);
    
    if(no1>no2 && no1>no3)
    printf("%d is the largest number ",no1);
    else if (no2>no1 && no2>no3)
    printf("%d is the largest number ",no2);
    else
    printf("%d is the largest number ",no3);
    
    
}

