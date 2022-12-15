//Write a program to check whether a triangle is valid or not, if three angles of the triangle are enterd through the keyboard. A triangle is valid if the sum of all three angle is equal to 180 degrees.

//input
#include <stdio.h>
int main()
{
    int angle1, angle2, angle3, sum;
    printf("enter the value of angle1 is: ");
    scanf("%d",&angle1);
    printf("enter the value of angle2 is: ");
    scanf("%d",&angle2);
    printf("enter the value of angle3 is: ");
    scanf("%d",&angle3);
    sum = angle1 + angle2 +angle3;
    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
    {
        
        printf("it is valid triangle");
    }
    else
    {
        printf("if is not a valid triangle");
    }
    
}

//output
/*enter the value of angle1 is: 50
enter the value of angle2 is: 70
enter the value of angle3 is: 60
it is valid triangle  */