// wap to print a fibonacci series for 5 num
// input
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sum, a[20], i, n;
    printf("how many fibonacci series you want to print: ");
        scanf("%d",&n);

    if (n > 20)
    {
        printf("you give greater number than 20\n");
        exit(0);
    }

    /*decleare two index a[0] or a[1]*/
    a[0] = 0, a[1] = 1;

    printf("first two value is: \n%d \n%d", a[0], a[1]);

    /*use loop for remaning 3 value */
    for (i = 2; i < n; i++)
    {
        sum = a[0] + a[1];
        printf("\n%d", sum);
        a[0] = a[1];
        a[1] = sum;
    }
}

//output
/*how many fibonacci series you want to print: 10
first two value is: 
0 
1
1
2
3
5
8
13
21
34 */