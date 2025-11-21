
//day1.1 - 100 days of code
// wap to input two numbers and display the sum.

#include <stdio.h>
int main()
{
     int length,breadth,area,perimeter;
     
     printf("Enter the length of the rectangle: \n");
     scanf("%d", &length);
     printf("Enter the breadth of the rectangle: \n");
     scanf("%d", &breadth);
     area=length*breadth;
     perimeter=2*(length+breadth);
     {
     printf("The area and perimeter of rectangle is %d  \n",area,perimeter);
     }
     return 0;
}
