/*write a progeram to find the maximum and minimum between two num using function*/
// input
#include <stdio.h>
int max_or_min(int, int);   /*function declare*/
int main()
{
    int num1, num2;
    printf("enter the value of first num: ");
    scanf("%d", &num1);
    printf("enter the value of first num: ");
    scanf("%d", &num2);
    max_or_min(num1, num2);     /*function call*/
}

/*function deffination*/
int max_or_min(int num1, int num2)
{
    if (num1 > num2)
    {
        printf("first num is greater");
    }
    else
    {
        printf("second num is greater");
    }
}

//output
/*
enter the value of first num: 1002
enter the value of first num: 2
first num is greater                                                                                                                     
*/