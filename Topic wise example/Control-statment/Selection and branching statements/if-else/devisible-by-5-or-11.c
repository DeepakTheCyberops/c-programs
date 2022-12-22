//check whether a number is divisible by 5 and 11 or not 
#include <stdio.h>

int main()
{
    int num;
    printf("enter the number to check it is divisivle of not with 5 and 11\n");
    scanf("%d", &num);
    if (num % 5 == 0 && num % 11 == 0)
    {
        printf("it is ");
    }
    else
    {
        printf("it is not");
    }
    return 0;
}