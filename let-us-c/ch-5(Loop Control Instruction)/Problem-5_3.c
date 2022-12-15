/*Problem 5.3
Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.
*/
#include <stdio.h>
int main()
{
    float x, power;
    int y, i;
    printf("\nEnter two numbers: ");
    scanf("%f%d", &x, &y);
    power = i = 1;
    while (i <= y)
    {
        power = power * x;
        i++;
    }
    printf("%.2f to the power %d is %.2f\n", x, y, power);
    return 0;
}

//output
/*
Enter two numbers: 5
2
5.00 to the power 2 is 25.00
*/