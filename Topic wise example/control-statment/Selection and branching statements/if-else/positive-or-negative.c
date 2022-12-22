//input
#include <stdio.h>
int main()
{
    int num;
    printf("enter the number to see whether it is positive or negative: \n");
    scanf("%d",&num);
    if (num>=1)
    {
        printf("it is positive");
    }
    else
    {
        printf("it is negative");
    }
    return 0;
}

//output
/*
enter the number to see whether it is positive or negative: 
-45
it is negative                                                      
*/