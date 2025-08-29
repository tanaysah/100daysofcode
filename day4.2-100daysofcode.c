//day 4.2 - 100 days of code
// wap to find and display the sum of the first n nautral numbers.

#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        sum = sum + i;
    }
        printf("The sum of first %d natural numbers is: %d",n,sum);
        
}