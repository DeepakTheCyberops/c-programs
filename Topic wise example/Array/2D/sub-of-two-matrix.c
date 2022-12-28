// input
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], sum[3][3], i, j;
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

    /*the sum of two mmmatrix*/
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("-------------------------------\n");

    /*display the sum of matrix*/
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t %3d", sum[i][j]);
            if (j == 3 - 1)
            {
                printf("\n\n");
            }
        }
    }
}

//output
/*Enter the number for a[0][0]:2
Enter the number for a[0][1]:2
Enter the number for a[0][2]:2
Enter the number for a[1][0]:2
Enter the number for a[1][1]:2
Enter the number for a[1][2]:2
Enter the number for a[2][0]:2
Enter the number for a[2][1]:2
Enter the number for a[2][2]:2
-------------------------------
Enter the number for a[0][0]:1
Enter the number for a[0][1]:1
Enter the number for a[0][2]:1
Enter the number for a[1][0]:1
Enter the number for a[1][1]:1
Enter the number for a[1][2]:1
Enter the number for a[2][0]:1
Enter the number for a[2][1]:1
Enter the number for a[2][2]:1
-------------------------------
	 2	 2	 2

	 2	 2	 2

	 2	 2	 2

-------------------------------
	 1	 1	 1

	 1	 1	 1

	 1	 1	 1

-------------------------------
	   1	   1	   1

	   1	   1	   1

	   1	   1	   1
*/
