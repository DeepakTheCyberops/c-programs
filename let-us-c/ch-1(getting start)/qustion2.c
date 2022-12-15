/*The length and breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area and perimeter of the rectangle, and the area and circumference of the circle.
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
    printf("Enter the value of radius: ");
    scanf("%f",&radius);
    area_of_rectangle = length * breadth;
    perimeter_of_rectangle = 2 * (length + breadth);
    circumference_of_circle = 2 * 3.14 * radius;
    printf("area of rectangle is %.2f\n",area_of_rectangle);
    printf("perimeter_of_rectangle is %.2f\n",perimeter_of_rectangle);
    printf("circumference of circle is %.2f\n",circumference_of_circle);
}

//output
/*Enter the velue of length: 4
Enter the value of breadth: 2
Enter the value of radius: 8
area of rectangle is 8.00
perimeter_of_rectangle is 12.00
circumference of circle is 50.24*/