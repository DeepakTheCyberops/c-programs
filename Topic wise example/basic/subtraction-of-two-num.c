// input
#include <stdio.h>
int main()
{
    int num1, num2, sub; // variable declaration
    printf("enter the value for first number: \n");
    scanf("%d",&num1);
    printf("enter the value for first number: \n");
    scanf("%d",&num2);
    sub = num1 - num2;
    printf("sum of num1 = %d and num 2 = %d ",num1,num2);
    printf("\n------------>%d", sub);
}

//output
/*
enter the value for first number: 
45
enter the value for first number: 
10
sum of num1 = 45 and num 2 = 10 
------------>35  
*/