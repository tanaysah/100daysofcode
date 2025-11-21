
//day 2.1 - 100daysofcode
// wap to to calculate the area and perimeter of a rectable given its length and breadth

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
