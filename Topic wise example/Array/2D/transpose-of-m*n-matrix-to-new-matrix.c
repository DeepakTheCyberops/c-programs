/*wap to find out the transpose of a m*n matrix*/

// input
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5][5], b[5][5], i, j, r, c;

    /*taking input from user*/
    printf("Enter the row for first matrix: ");
    scanf("%d", &r);
    printf("Enter the column for first matrix; ");
    scanf("%d", &c);

    /*use if condison for see matrix is right or not */
    if (r > 5 || c > 5)
    {
        printf("the addion is not possible \n because you did not enter the valid matrix");
        exit(0);
    }

    /*taking input from user by for loop*/
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter the value of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    /*print the matrix by for loop*/
    printf("-------------------------------\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("\t %3d", a[i][j]);
        }
        printf("\n");
    }

    printf("-------------------------------\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++) // define one elimet to find out the minimun value of array

        {
            b[i][j] = a[i][j];
        }
    }

    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("\nEnter the value of b[%d][%d]: ", i, j);
            printf("%d", b[i][j]);
        }
    }

    printf("\n-------------------------------\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            // printf("\nEnter the value of b[%d][%d]: ", i, j);
            printf("\t%3d", b[i][j]);
        }
        printf("\n");
    }
}
