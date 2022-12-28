// input
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5][5], b[5][5], sum[5][5], mul[5][5], i, j, k, r1, r2, c1, c2;

    /*taking input from user*/
    printf("Enter the row for first matrix: ");
    scanf("%d", &r1);
    printf("Enter the column for first matrix; ");
    scanf("%d", &c1);
    printf("Enter the row for second matrix: ");
    scanf("%d", &r2);
    printf("Enter the column for second matrix: ");
    scanf("%d", &c2);

    /*use if condison for see matrix is right or not */
    if (r1 > 5 || c1 > 5 || r2 > 5 || c2 > 5 || c1 != r2)
    {
        printf("the addion is not possible \n because you did not enter the valid matrix");
        exit(0);
    }

    /*input 1 matrix*/
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Enter the number for a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("-------------------------------\n");

    /*input 2 matrix*/
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Enter the number for a[%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("-------------------------------\n");

    /*print 1 mmatrix*/
    printf("Print the first matrix: \n\n");
    printf("\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("\t %3d", a[i][j]);
        }
        printf("\n");
    }
    printf("-------------------------------\n");

    /*print 2 mmatrix*/
    printf("Print the second matrix: \n\n");
    printf("\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("\t %3d", b[i][j]);
        }
        printf("\n");
    }

    /*multiply of matrix*/
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("-------------------------------\n");

    /*the mmul of three mmmatrix*/
    printf("After multiply of two matri \n\n");
    printf("\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("\t %3d", mul[i][j]);
        }
        printf("\n");
    }
}


//output
/*Enter the row for first matrix: 2
Enter the column for first matrix; 3
Enter the row for second matrix: 3
Enter the column for second matrix: 2
Enter the number for a[0][0]:2
Enter the number for a[0][1]:4
Enter the number for a[0][2]:5
Enter the number for a[1][0]:6
Enter the number for a[1][1]:3
Enter the number for a[1][2]:1
-------------------------------
Enter the number for a[0][0]:3
Enter the number for a[0][1]:1
Enter the number for a[1][0]:2
Enter the number for a[1][1]:4
Enter the number for a[2][0]:6
Enter the number for a[2][1]:5
-------------------------------
Print the first matrix: 


	   2	   4	   5
	   6	   3	   1
-------------------------------
Print the second matrix: 


	   3	   1
	   2	   4
	   6	   5
-------------------------------
After multiply of two matri 


	  44	  43
	  30	  23
*/