// input
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter Two Integers\n");
    printf("First: ");
    scanf("%d", &a);
    printf("Second: ");
    scanf("%d",&b);

    switch (a > b)
    {
    case 1:
        printf("%d is Maximum", a);
        break;
    case 0:
        printf("%d is maximum", b);
        break;
    }
    return 0;
}


//output
/*Enter Two Integers
First: 2
Second: 9
9 is maximum   */