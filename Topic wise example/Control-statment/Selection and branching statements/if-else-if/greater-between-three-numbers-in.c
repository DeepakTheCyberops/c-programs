// input
#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("enter the value of first no: \n");
    scanf("%d", &n1);
    printf("enter the value of second no: \n");
    scanf("%d", &n2);
    printf("enter the value of third no: \n");
    scanf("%d", &n3);
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("%d first is greater ", n1);
        }
        else
        {
            printf("%d third is greater", n3);
        }
    }
    else if (n2 > n3)
    {
        if (n2 > n1)
        {
            printf("%d second is grater", n2);
        }
    }
    else
    {
        printf("%d thirs is greater", n3);
    }
}

// output
/*
einter the value of first no:
1
einter the value of second no:
5
einter the value of third no:
2
5 second is grater   */