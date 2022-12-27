// input
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], sum[3][3], mul[3][3], i, j, k;
    /*input 1 matrix*/
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the number for a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("-------------------------------\n");

    /*input 2 matrix*/
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the number for a[%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("-------------------------------\n");

    /*print 1 mmatrix*/
    printf("Print the first matrix: \n\n");
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t %d", a[i][j]);
            if (j == 3 - 1)
            {
                printf("\n\n");
            }
        }
    }
    printf("-------------------------------\n");

    /*print 2 mmatrix*/
    printf("Print the second matrix: \n\n");
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t %d", b[i][j]);
            if (j == 3 - 1)
            {
                printf("\n\n");
            }
        }
    }

    /*multiply of matrix*/
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("-------------------------------\n");

    /*the mmul of three mmmatrix*/
    printf("After multiply of two matri \n\n");
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t %3d", mul[i][j]);
            if (j == 3 - 1)
            {
                printf("\n\n");
            }
        }
    }
}



//output
/*Enter the number for a[0][0]:3
Enter the number for a[0][1]:1
Enter the number for a[0][2]:1
Enter the number for a[1][0]:2
Enter the number for a[1][1]:2
Enter the number for a[1][2]:1
Enter the number for a[2][0]:1
Enter the number for a[2][1]:3
Enter the number for a[2][2]:1
-------------------------------
Enter the number for a[0][0]:1
Enter the number for a[0][1]:2
Enter the number for a[0][2]:1
Enter the number for a[1][0]:2
Enter the number for a[1][1]:1
Enter the number for a[1][2]:1
Enter the number for a[2][0]:1
Enter the number for a[2][1]:2
Enter the number for a[2][2]:1
-------------------------------
Print the first mmatrix: 


	 3	 1	 1

	 2	 2	 1

	 1	 3	 1

-------------------------------
Print the second mmatrix: 


	 1	 2	 1

	 2	 1	 1

	 1	 2	 1

-------------------------------
After multiply of two matri 


	   6	   9	   5

	   7	   8	   5

	   8	   7	   5
*/