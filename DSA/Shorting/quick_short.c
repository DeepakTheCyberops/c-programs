// input
#include <stdio.h>

void swap(int *p, int *q)
{
    int t = *p;
    *p = *q;
    *q = t;
}

int partition(int arr[], int lb, int ub)
{
    int pivot = arr[lb];
    int i = lb;
    int j = ub;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= ub - 1) // find a singal element to swap with smaller value(j)
        {
            i++;
        }
        while (arr[j] > pivot && j >= lb + 1) // find a singal element to swap with grater value(i)
        {
            j--;
        }
        if (i < j)
        {
            swap(&arr[i], &arr[j]); // after find a singal singal element of smaller and grater element swap it
        }
    }
    swap(&arr[lb], &arr[j]); // after while loop end swap lowerbound(lb) element with j value
    return j;
}

int Quick_short(int arr[], int lb, int ub)
{
    int part;
    if (lb < ub)
    {
        part = partition(arr, lb, ub);
        Quick_short(arr, lb, part - 1);
        Quick_short(arr, part + 1, ub);
    }
}

int main()
{
    int n, i;

    printf("enter the size of array ");
    scanf("%d", &n);

    int a[n];

    printf("enter the element of array \n");
    for (i = 0; i < n; i++)
    {
        printf("the array a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    Quick_short(a, 0, n - 1);

    printf("the shorted array is \n");
    for (i = 0; i < n; i++)
    {
        printf("the array a[%d] = %d\n", i, a[i]);
    }
}

/*output
enter the size of array 8
enter the element of array 
the array a[0] = 4
the array a[1] = 6
the array a[2] = 2
the array a[3] = 5
the array a[4] = 7
the array a[5] = 9
the array a[6] = 1
the array a[7] = 3
the shorted array is 
the array a[0] = 1
the array a[1] = 2
the array a[2] = 3
the array a[3] = 4
the array a[4] = 5
the array a[5] = 6
the array a[6] = 7
the array a[7] = 9
*/