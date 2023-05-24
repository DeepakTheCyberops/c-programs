// input
#include <stdio.h>
#include <stdlib.h>

int i;

int insert(int *array, int location, int value, int size)
{
    for (i = size; i >= location; i--)
    {
        array[i + 1] = array[i];
    }
    array[location] = value;
    size++;
    for (i = 0; i < size; i++)
    {
        printf("array [%d] =  %d\n", i, array[i]);
    }
}

int main()
{
    int a[20], len, loc, new_num;

    printf("enter the length of array: ");
    scanf("%d", &len);

    for (i = 0; i < len; i++)
    {
        printf("enter the value of array a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("enter a new value: ");
    scanf("%d", &new_num);

    printf("enter the location of a new element of a  array: ");
    scanf("%u", &loc);

    if (loc > len || loc < 0)
    {
        printf("the operation is  not possibe");
    }
    else
    {
        insert(a, loc, new_num, len);
    }
}

/*output
enter the length of array: 8
enter the value of array a[0] = 45
enter the value of array a[1] = 6165
enter the value of array a[2] = -54
enter the value of array a[3] = 65561
enter the value of array a[4] = 651515
enter the value of array a[5] = 651
enter the value of array a[6] = 15
enter the value of array a[7] = 54
enter a new value: 654123
enter the location of a new element of a  array: 6
array [0] =  45
array [1] =  6165
array [2] =  -54
array [3] =  65561
array [4] =  651515
array [5] =  651
array [6] =  654123
array [7] =  15
array [8] =  54
*/