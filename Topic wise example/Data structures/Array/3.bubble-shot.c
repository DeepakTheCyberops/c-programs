#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20], i, n, location, new_num, temp, j;
    /*taking input from user*/
    printf("\nEnter the array size: ");
    scanf("%d", &n);

    if (n > 10)
    {
        printf("you enter the greater size then the array size");
        exit(0);
    }

    /*use for loop for enter the n nummber of value*/
    printf("Enter the Values: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /*use this for loop for display the value */
    for (i = 0; i < n; i++)
    {
        printf("\nGiven values are: ");
        printf("a[%d]=%d", i, a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (j = 0; j < n; j++)
    {
        printf("\nthe new array %d", a[j]);
    }
}

/*output
Enter the array size: 4
Enter the Values: 
-564
56421
12
-354354

Given values are: a[0]=-564
Given values are: a[1]=56421
Given values are: a[2]=12
Given values are: a[3]=-354354
the new array -354354
the new array -564
the new array 12
the new array 56421  */