// input
#include <stdio.h>

int i;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selection_short(int arr[], int size) // use this for loop for set min value for n - 2 pass
{
    int j, min;
    for (i = 0; i <= size - 2; i++)
    {
        min = i;
        for (j = i; j <= size - 1; j++) // use this for loop for to compare the each element value to the min value
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(&arr[i], &arr[min]); // when min value is update swap it
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

    selection_short(a, n);

    printf("the shorted array is \n");
    for (i = 0; i < n; i++)
    {
        printf("the array a[%d] = %d\n5", i, a[i]);
    }
}