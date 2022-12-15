/*Problem 9.2
Write a program that defines a function that calculates power of one number raised to another and factorial value of a number in one call.
Program
*/
#include <stdio.h>
void power_fact(float, int, int, float, int);
int main()
{
    float a;
    int b, number, factorial;
    float pow;
    printf("Enter a and b for calculating a raised to b: ");
    scanf("%f %d", &a, &b);
    printf("Enter number whose factorial is to be calculated:");
    scanf("%d", &number);
    power_fact(a, b, number, &pow, &factorial);
    printf("Power = %f Factorial = %d", pow, factorial);
    return 0;
}
void power_fact(float x, int y, int num, float *power, int *fact)
{
    float res = 1;
    int i;
    for (i = 1; i <= y; i++)
        res = res * x;
    *power = res;
    res = 1;
    for (i = 1; i <= num; i++)
        res = res * i;
    *fact = res;
}