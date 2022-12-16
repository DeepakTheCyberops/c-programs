// input
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5], i, min = 0, n;
    printf("enter the terms:  ");
    scanf("%d", &n);
    if (n > 20)
    {
        printf("you give greater number than 20\n");
        exit(0);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); // take input from the user
        exit(0);
    }

    min = a[0]; // define one elimet to find out the minimun value of array

    for (i = 0; i < n; i++)
    {

        if (min > a[i])
        {
            min = a[i]; // find min value which i given in array
        }
    }
    printf("the minimum number is: %d", min); // print the minimum value of a array
    return 0;
}

// output
