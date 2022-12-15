// input
#include <stdio.h>
int main()
{
    int num1, num2, sum = 0; // variable declaration
    printf("enter the value for first number: \n");
    scanf("%d",&num1);
    printf("enter the value for first number: \n");
    scanf("%d",&num2);
    sum = num1 + num2;
    printf("sum of num1 = %d and num 2 = %d ");
    printf("\n------------>%d", sum);
}

//output
/*
enter the value for first number: 
45
enter the value for first number: 

10
sum of num1 = 10 and num 2 = 45 
------------>55 
*/