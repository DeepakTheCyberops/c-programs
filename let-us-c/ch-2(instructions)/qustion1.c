/*If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint: Use the modulus operator %)*/

// input
#include <stdio.h>
int main()
{
    int num1, num2, num3, num4, num5, sum;
    printf("enter the value of number 1 is: ");
    scanf("%d", &num1);
    printf("enter the value of number 2 is: ");
    scanf("%d", &num2);
    printf("enter the value of number 3 is: ");
    scanf("%d", &num3);
    printf("enter the value of number 4 is: ");
    scanf("%d", &num4);
    printf("enter the value of number 5 is: ");
    scanf("%d", &num5);
    sum = num1 + num2 + num3 +num4 + num5;
    printf("sum of all five number is: %d",sum);
}

//output
/*enter the value of number 1 is: 5
enter the value of number 2 is: 9
enter the value of number 3 is: 14
enter the value of number 4 is: 5
enter the value of number 5 is: 3
sum of all five number is: 36   */