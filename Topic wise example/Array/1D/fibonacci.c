// input
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20], i, n, sum = 0;
    a[0] = 0;
    a[1] = 1;
    printf("enter how many number you want to print:  ");
    scanf("%d", &n);
    if (n > 20)
    {
        printf("you give greater number than 20\n");
        exit(0);
    }

    for (i = 2; i < n; i++)
    {
        sum = a[0] + a[1];
        printf("%d\n", sum);
        a[0] = a[1];
        a[1] = sum;
    }
}

/*output
enter how many number you want to print:  10
1
2
3
5
8
13
21
34
*/