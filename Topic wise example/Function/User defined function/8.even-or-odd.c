// input
#include <stdio.h>
int even_or_odd(int);
int main()
{
    int num;
    printf("enter the num ");
    scanf("%d", &num);
    even_or_odd(num);
}

/*function */
int even_or_odd(int x)
{
    if (x % 2 == 0)
    {
        printf("It is even ");
    }
    else
    {
        printf("It is odd ");
    }
}