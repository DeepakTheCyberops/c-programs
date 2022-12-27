// input
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10][10], b[5][5], sum[5][5], i, j, r1, c1, r2, c2;

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
    if (r1 > 5 || c1 > 5 || r2 > 5 || c2 > 5 || r1 != r2 || c1 != c2)
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
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("\t %d", a[i][j]);
            if (j == r1 - 1)
            {
                printf("\n\n");
            }
        }
    }
    printf("-------------------------------\n");

    /*print 2 mmatrix*/
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("\t %d", b[i][j]);
            if (j == c2 - 1)
            {
                printf("\n\n");
            }
        }
    }

    /*the sum of two mmmatrix*/
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < r2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("-------------------------------\n");

    /*display the sum of matrix*/
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("\t %3d", sum[i][j]);
            if (j == c1 - 1)
            {
                printf("\n\n");
            }
        }
    }
}


//output
/*Enter the row for first matrix: 4
Enter the column for first matrix; 4
Enter the row for second matrix: 4
Enter the column for second matrix: 4
Enter the number for a[0][0]:1
Enter the number for a[0][1]:2
Enter the number for a[0][2]:3
Enter the number for a[0][3]:4
Enter the number for a[1][0]:5
Enter the number for a[1][1]:6
Enter the number for a[1][2]:7
Enter the number for a[1][3]:8
Enter the number for a[2][0]:9
Enter the number for a[2][1]:10
Enter the number for a[2][2]:11
Enter the number for a[2][3]:12
Enter the number for a[3][0]:13
Enter the number for a[3][1]:14
Enter the number for a[3][2]:15
Enter the number for a[3][3]:16
-------------------------------
Enter the number for a[0][0]:1
Enter the number for a[0][1]:2
Enter the number for a[0][2]:3
Enter the number for a[0][3]:4
Enter the number for a[1][0]:5
Enter the number for a[1][1]:6
Enter the number for a[1][2]:7
Enter the number for a[1][3]:8
Enter the number for a[2][0]:9
Enter the number for a[2][1]:10
Enter the number for a[2][2]:11
Enter the number for a[2][3]:12
Enter the number for a[3][0]:13
Enter the number for a[3][1]:14
Enter the number for a[3][2]:15
Enter the number for a[3][3]:16
-------------------------------
	 1	 2	 3	 4

	 5	 6	 7	 8

	 9	 10	 11	 12

	 13	 14	 15	 16

-------------------------------
	 1	 2	 3	 4

	 5	 6	 7	 8

	 9	 10	 11	 12

	 13	 14	 15	 16

-------------------------------
	   2	   4	   6	   8

	  10	  12	  14	  16

	  18	  20	  22	  24

	  26	  28	  30	  32

*/