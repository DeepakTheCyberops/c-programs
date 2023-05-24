// input
//  a[1] + a[2] = a[3]
#include <stdio.h>
int main()
{
    int n, i, j, num;

    printf("Enter the size of array ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("The array is a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the num to find the sum of a array element");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n - i; j++)
        {
            if (a[i] + a[j] == num)
            {
                printf("the location is %d and %d for sum of the num = %d", i, j, num);
            }
        }
    }
}