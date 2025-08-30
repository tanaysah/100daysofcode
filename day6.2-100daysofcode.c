//day 6.2 - 100 days of code
// wap to to check postive negative or zero

#include<stdio.h>
int main()
{
    int i;
    
    printf("Enter any number: ");
    scanf("%d", &i);
    
    if(i>0)
    printf("+ number");
    else if(i<0)
    printf("- number");
    else
    printf("= to 0");
   
}