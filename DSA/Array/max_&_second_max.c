// input
#include <stdio.h>

int i;

void recall_array(int array[], int num)
{
    int x;
    for (i = 0; i < num; i++)
    {
        printf("the recall array is a[%d] = %d\n", i, array[i]);
    }
}

int max(int array[], int num)
{
    int maxx = array[0], j;
    for (i = 0; i < num; i++)
    {
        if (maxx < array[i])
        {
            maxx = array[i];
            j = i;
        }
    }
    return maxx;
}

void smax(int array[], int num)
{
    int x;
    x = max(array, num);
    int smax = array[0], j;
    for (i = 0; i < num; i++)
    {
        if (x == array[i])
        {
            continue;
        }
        else
        {
            if (smax < array[i])
            {
                smax = array[i];
            }
        }
    }
    printf("the largest value of array is: %d\n", x);
    printf("the second max value is: %d\n", smax);
}

int main()
{
    int n;
    printf("enter the size of your array ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    max(a, n);
    // printf("");
    recall_array(a, n);

    smax(a, n);
}
