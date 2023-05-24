// input
#include <stdio.h>

int take_array_value(int size)
{
    int i, array[size], value_for_find, x;
    for (i = 0; i < size; i++)
    {
        printf("Enter the vlaue of array[%d] is: ", i);
        scanf("%d", &array[i]);
    }
    printf("Enter a vale to find the location: ");
    scanf("%d", &value_for_find);

    x = binary_search(array, size, value_for_find);
    printf(" The location of value you want to find: %d", x);
}

int binary_search(int a[], int size, int find)
{
    int lowerbound = 0, midle, size_for_wile;

    size_for_wile = size;

    while (lowerbound < size_for_wile)
    {
        midle = lowerbound + (size_for_wile - lowerbound) / 2;

        if (a[midle] == find)
        {
            return midle;
            break;
        }
        else if (a[midle] < find)
        {
            lowerbound = midle + 1;
        }
        else
        {
            lowerbound = midle - 1;
        }
    }
}

int main()
{
    int size_of_array;

    printf("Size of array is: ");
    scanf("%d", &size_of_array);

    int a[size_of_array];

    take_array_value(size_of_array);
}

// output
/*Size of array is: 8
Enter the vlaue of array[0] is: -965
Enter the vlaue of array[1] is: -456
Enter the vlaue of array[2] is: 0
Enter the vlaue of array[3] is: 645
Enter the vlaue of array[4] is: 666
Enter the vlaue of array[5] is: 777
Enter the vlaue of array[6] is: 888
Enter the vlaue of array[7] is: 999
Enter a vale to find the location: 888
The location of value you want to find: 6*/