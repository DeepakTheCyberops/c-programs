// input
#include <stdio.h>
int i;

int del(int array[], int size, int loc)
{
    for (i = loc; i < size; i++)
    {
        array[i] = array[i + 1];
    }
    size--;
    for (i = 0; i < size; i++)
    {
        printf("array is a[%d] = %d\n", i, array[i]);
    }
}

int main()
{
    int a[20], num, del_loc;

    printf("enter the size of array: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("enter the value of array a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("enter the delete element location: ");
    scanf("%d", &del_loc);
    del(a, num, del_loc);
}

/*enter the size of array: 5
enter the value of array a[0] = -94
enter the value of array a[1] = 56
enter the value of array a[2] = 541
enter the value of array a[3] = 564
enter the value of array a[4] = 5
enter the delete element location: 0
array is a[0] = 56
array is a[1] = 541
array is a[2] = 564
array is a[3] = 5*/