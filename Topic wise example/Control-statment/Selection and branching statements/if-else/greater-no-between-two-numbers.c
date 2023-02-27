// // greater no between two numbers
// // input
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Please Enter Two different values\n");
    scanf("%d %d", &num1, &num2);
    if(num1 > num2)
    {
        printf("%d is Largest\n", num1);
    }
    else if (num2 > num1)
    {
        printf("%d is Largest\n", num2);
    }
    return 0;
}