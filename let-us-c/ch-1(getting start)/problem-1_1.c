// Ramesh's basic salary in input through the keyboard. His dearness allowance in 40% of basic salary, and house rent allowance in 20% of basic salary. Write a program to calculate his gross salary.
// input
#include <stdio.h>
int main()
{
    float bp, da, hra, grpay;
    printf("\n enter basic salary of ramesh:");
    scanf("%f", &bp);
    da = 0.4 * bp;
    hra = 0.2 * bp;
    grpay = bp + da + hra;
    printf("basic salary of ramesh = %.2f\n", bp);
    printf("dearness allowance = %.2f\n", da);
    printf("house rent allowance = %.2f\n", hra);
    printf("gross pay of ramesh is %.2f\n", grpay);
    return 0;
}

// output
/*enter basic salary of ramesh:10000
basic salary of ramesh = 10000.00
dearness allowance = 4000.00
house rent allowance = 2000.00
gross pay of ramesh is 16000.00
*/