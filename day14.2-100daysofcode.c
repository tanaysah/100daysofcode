// Day 14.2 - 100 days of code
// WAP to print the product of even numbers from 1 to n.


#include <stdio.h>
int main() 
{
    int n, i, product = 1;

    printf("Enter n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            product = product * i;  // multiply even numbers
        }
    }

    printf("Product of even numbers from 1 to %d is %d\n", n, product);

    return 0;
}

