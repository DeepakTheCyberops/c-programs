// input
#include <stdio.h>
int i;
void bubble_short(int len, int a[])
{
    int j, temp = 0;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("the arranged array is: \n");

    for (i = 0; i < len; i++)
    {
        printf("array[%d] = %d\n", i, a[i]);
    }
}

int main()
{
    int n, temp = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("the array[%d] is : ", i);
        scanf("%d", &a[i]);
    }

    bubble_short(n, a);
}

// output
/*Enter the size of array: 5
the array[0] is : -555
the array[1] is : 562
the array[2] is : 0
the array[3] is : 56565
the array[4] is : 9562
the arranged array is:
array[0] = -555
array[1] = 0
array[2] = 562
array[3] = 9562
array[4] = 56565
*/