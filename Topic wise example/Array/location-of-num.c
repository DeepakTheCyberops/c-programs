/*wap in c to find out the location of an item in the array of 5 element*/
// input
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20], i, n, found, tosearch;

    printf("enter how many number you want to print:  ");
    scanf("%d", &n);
    if (n > 20)
    {
        printf("you give greater number than 20\n");
        exit(0);
    }

    for (i = 0; i < n; i++)
    {
        printf("enter the num: ");
        scanf("%d", &a[i]); // take input from the user
    }

    printf("enter the number to find the location of element: ");
    scanf("%d", &tosearch);

    for (i = 0; i < n; i++)
    {
        if (a[i] == tosearch)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("the location of number is: %d", found + 1);
    }
    else
    {
        printf("\n%d is not found in the array: %d", tosearch);
    }
    return 0;
}

// output
/*enter how many number you want to print:  5
enter the num: 1
enter the num: 2
enter the num: 3
enter the num: 4
enter the num: 5
enter the number to find the location of element: 5
the location of number is: 5*/
