// Update array element using One Dimensional Array in C
// This program is about to update and print the element in array using array and for loops

// Source Code
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, position, a[10], n, del;

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

    /*take position number for updating the number*/
    printf("\nEnter the position for delete the element: ");
    scanf("%d", &position);

    /*take input from user for update the pre given value*/
    printf("\nEnter the value to be deleted is: %d", a[position]);

    /*use if statment to check position not greatere then n + 1*/
    if (position >= n )
    {
        printf(" \n Deletion is not possible in the array.");
    }

    else
    {
        /*use this for loop for updating the value old to new*/
        for (i = position ; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }

        /*use this for loop for print the updated loop*/
        printf("\nUpdated value is: ");
        for (i = 0; i < n - 1; i++)
        {
            printf("\na[%d]=%d", i, a[i]);
        }
    }
    return 0;
}

/*Enter the array size: 5
Enter the Values: 
12
35
65
54
85
Given values are: a[0]=12
Given values are: a[1]=35
Given values are: a[2]=5
Given values are: a[3]=4
Given values are: a[4]=85
Enter the position for delete the element: 0
Enter the value to be deleted is: 12
Updated value is: 
a[0]=35
a[1]=5
a[2]=4
a[3]=85*/