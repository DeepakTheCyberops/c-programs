// input
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5][5], i, j, r, c;

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
            printf("Enter the value of a[%d][%d]", i, j);
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

    /*use this for loop to print transponse of matrix*/
    printf("-------------------------------\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("\t %3d", a[j][i]);
        }
        printf("\n");
    }
}

//output
/*Enter the row for first matrix: 2
Enter the column for first matrix; 3
Enter the value of a[0][0]1
Enter the value of a[0][1]2
Enter the value of a[0][2]3
Enter the value of a[1][0]4
Enter the value of a[1][1]5
Enter the value of a[1][2]6
-------------------------------
	   1	   2	   3
	   4	   5	   6
-------------------------------
	   1	   4
	   2	   5
	   3	   6
*/