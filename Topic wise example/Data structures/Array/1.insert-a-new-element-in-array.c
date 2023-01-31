// Update array element using One Dimensional Array in C
// This program is about to update and print the element in array using array and for loops

// Source Code
#include <stdio.h>
int main()
{
    int i, position, a[10], n, update;

    /*taking input from user*/
    printf("\nEnter the array size: ");
    scanf("%d", &n);

    if (n > 10)
    {
        printf("you enter the greater size then the array size");
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
    printf("\nEnter the position to be update: ");
    scanf("%d", &position);

    /*take input from user for update the pre given value*/
    printf("\nEnter the value to be update: ");
    scanf("%d", &update);

    /*use this for loop for updating the value old to new*/
    for (i = n; i > position; i--)
    {
        a[i] = a[i-1]; 
    }
    a[position] = update;

    /*use this for loop for print the updated loop*/
    printf("\nUpdated value is: ");
    for (i = 0; i <= n; i++)
    {
        printf("\na[%d]=%d", i, a[i]);
    }
    return 0;
}