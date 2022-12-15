/* Give the length and breadth of a rectangle, Write a program to find whether a area or perimeter of the rectangle is greater then its perimeter. for example, the three points fall of one straight line.
*/

//input
#include <stdio.h>
int main()
{
    float length,breadth,radius,area_of_rectangle,circumference_of_circle,perimeter_of_rectangle;
    printf("Enter the velue of length: ");
    scanf("%f",&length);
    printf("Enter the value of breadth: ");
    scanf("%f",&breadth);
    area_of_rectangle = length * breadth;
    perimeter_of_rectangle = 2 * (length + breadth);
    //printf("area of rectangle is %.2f\n",area_of_rectangle);
    //printf("perimeter_of_rectangle is %.2f\n",perimeter_of_rectangle);
    if (area_of_rectangle > perimeter_of_rectangle)
    {
        printf("the area of rectangle it greater than perimeter of rectangle");
    }
    else
    {
        printf("the perimeter of rectangle is greater than area of rectangle");
    }
    
}

//output - 1 
/*Enter the velue of length: 2
Enter the value of breadth: 4
the perimeter of rectangle is greater than area of rectangle */

//output - 2
/*Enter the velue of length: 10
Enter the value of breadth: 5
the area of rectangle it greater than perimeter of rectangle      */