// input
#include <stdio.h>

int i;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void insergion_short(int arr[], int size)
{
    for (i = 0; i < size; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(&arr[j - 1], &arr[j]);
            j--;
        }
    }
}

int main()
{
    int n;

    printf("enter the size of array ");
    scanf("%d", &n);

    int a[n];

    printf("enter the element of array \n");
    for (i = 0; i < n; i++)
    {
        printf("the array a[%d] = ");
        scanf("%d", &a[i]);
    }

    insergion_short(a, n);

    printf("the shorted array is \n");
    for (i = 0; i < n; i++)
    {
        printf("the array a[%d] = %d\n5", i, a[i]);
    }
}