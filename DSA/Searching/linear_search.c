// input
#include <stdio.h>

int i;

void leanear_search(int array[], int len, int new_element)
{
    int loc;
    for (i = 0; i < len; i++)
    {
        if (array[i] == new_element)
        {
            loc = i;
            break;
        }
    }

    if (loc == i)
    {
        printf("the location of the element is: %d ", loc);
    }
    else
    {
        printf("element is not present");
    }
}
int main()
{
    int n, j, temp = 0, elm;
    printf("enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of a array\n");
    for (i = 0; i < n; i++)
    {
        printf("the array is a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the element to find a location of an element: ");
    scanf("%d", &elm);

    leanear_search(a, n, elm);
}

// output
/*enter the size of array: 5
Enter the elements of a array
the array is a[0] = 1685
the array is a[1] = 564
the array is a[2] = 345
the array is a[3] = 864
the array is a[4] = 15
Enter the element to find a location of an element: 864
the location of the element is: 3*/