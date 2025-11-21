
//day 2.2 - 100daysofcode
// wap to to calculate the area and circumferece of a circle given radius.

#include <stdio.h>
int main()
{
    float radius;
    float area, circumference;
    //taking pi value 3.14 by default.
    printf("Enter the radius of circle:  \n");
    scanf("%f", &radius);
    
    area=3.14*(radius*radius);
    circumference=2*3.14*(radius);
    
    printf("The area and circumfernce is %f, %f \n" ,area, circumference);
}
