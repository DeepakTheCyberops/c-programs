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
    (x == -1) ? printf(" element is not found: %d", x) : printf(" The location of value you want to find: %d", x);  //check value is present or not 
}

int binary_search(int a[], int size, int find)
{
    int lowerbound = 0, midle;

    while (lowerbound <= size)
    {
        midle = lowerbound + (size - lowerbound) / 2;

        if (a[midle] == find)
        {
            return midle;
        }
        if (a[midle] < find)    //if value is greater then the middle value then make lower bound equal to middle + 1
        {
            lowerbound = midle + 1;
        }
        else    //if value is less then to the find value, then decrease the middle value and make upper bound value is mid -1
        {
            size = midle - 1;
        }
    }
    return -1;  //if value is not find its return -1 value to the function
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
/*Size of array is: 12
Enter the vlaue of array[0] is: 1
Enter the vlaue of array[1] is: 2
Enter the vlaue of array[2] is: 3
Enter the vlaue of array[3] is: 4
Enter the vlaue of array[4] is: 5
Enter the vlaue of array[5] is: 6
Enter the vlaue of array[6] is: 7
Enter the vlaue of array[7] is: 8
Enter the vlaue of array[8] is: 9
Enter the vlaue of array[9] is: 10
Enter the vlaue of array[10] is: 11
Enter the vlaue of array[11] is: 12
Enter a vale to find the location: 1
The location of value you want to find: 0*/