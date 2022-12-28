// input
#include <stdio.h>
int main()
{
    int a[3][3], i, j;
    /*taking input from user by for loop*/
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the value of a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    /*print the matrix by for loop*/
    printf("-------------------------------\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t %3d", a[i][j]);
        }
        printf("\n");
    }

    /*use this for loop to print transponse of matrix*/
    printf("-------------------------------\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t %3d", a[j][i]);
        }
        printf("\n");
    }
}

//output
/*Enter the value of a[0][0]1
Enter the value of a[0][1]2
Enter the value of a[0][2]3
Enter the value of a[1][0]4
Enter the value of a[1][1]5
Enter the value of a[1][2]6
Enter the value of a[2][0]7
Enter the value of a[2][1]8
Enter the value of a[2][2]9
-------------------------------
	   1	   2	   3
	   4	   5	   6
	   7	   8	   9
-------------------------------
	   1	   4	   7
	   2	   5	   8
	   3	   6	   9
*/