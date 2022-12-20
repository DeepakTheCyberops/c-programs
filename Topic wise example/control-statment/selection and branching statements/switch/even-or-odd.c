// input
#include <stdio.h>
int main()
{
    int num;
    printf("enter the number ");
    scanf("%d", &num);

    switch (num % 2)
    {
    case 0:
        printf("even");
        break;

    case 1:
        printf("odd");
        break;
    default:
        break;
    }
}
