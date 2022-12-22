// // greater no between two numbers
// // input
// #include <stdio.h>
// int main()
// {
//     int n1, n2;
//     printf("enter the value of n2: ");
//     scanf("%d", n1);
//     printf("enter the value of n2: ");
//     scanf("%d", n2);
//     if (n1>n2)
//     {
//         printf("first number is greater");
//     }
//     else
//     {
//         printf("second no. is greater");
//     }
//     return 0;
// }
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