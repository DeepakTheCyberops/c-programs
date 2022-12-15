/*Problem 6.2
Write a program to add first seven terms of the following series using a for loop.
*/
#include <stdio.h>
int main()
{
    int i = 1, j;
    float fact, sum = 0.0;
    {
        fact = 1.0;
            for (j = 1; j <= i; j++)
                fact = fact * j;
        sum = sum + i / fact;
    }
    printf("Sum of series = %.2f\n", sum);
    return 0;
}