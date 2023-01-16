// input
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10], b[10], c[20];
    int i, n1, n2, n, x;

    printf("Enter \nHow many number you want to print for first array: "); // enter the 40 bit vlue
    scanf("%d", &n1);
    printf("Enter \nHow many number you want to print for second array: "); // enter the 40 bit vlue
    scanf("%d", &n2);
    if (n1 > 10 || n2 > 10)
    {
        printf("you give greater number than 20\n");
        exit(0);
    }
    printf("\n-------------------------\n");

    for (i = 0; i < n1; i++)
    {
        printf("enter a[%d]: ", i);
        scanf("%d", &a[i]); // take input from the user
    }
    printf("\n-------------------------\n");

    for (i = 0; i < n2; i++)
    {
        printf("enter b[%d]", i);
        scanf("%d", &b[i]); // take input from the user
    }
    printf("\n-------------------------");

    for (i = 0; i < n1; i++)
    {
        printf("\nfirst array a[%d]: %d", i, a[i]);
    }
    printf("\n-------------------------");

    for (i = 0; i < n2; i++)
    {
        printf("\nsecond array b[%d]: %d", i, b[i]);
    }
    x = 0;
    n = n1 + n2;
    /*----------------------------------------------------------------------------------*/
    for (i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    printf("\n-------------------------");

    for (i = n1; i < n; i++)
    {
        c[i] = b[x];
        x++;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nthe new array is : %d ", c[i]);
    }
    printf("\n-------------------------");
}

/*output
Enter 
How many number you want to print for first array: 3
Enter 
How many number you want to print for second array: 4

-------------------------
enter a[0]: 21
enter a[1]: 54
enter a[2]: 12

-------------------------
enter b[0]45
enter b[1]12
enter b[2]45
enter b[3]12

-------------------------
first array a[0]: 21
first array a[1]: 54
first array a[2]: 12
-------------------------
second array b[0]: 45
second array b[1]: 12
second array b[2]: 45
second array b[3]: 12
-------------------------
the new array is : 21 
the new array is : 54 
the new array is : 12 
the new array is : 45 
the new array is : 12 
the new array is : 45 
the new array is : 12 
------------------------- */