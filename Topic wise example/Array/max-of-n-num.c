// maximum of n number by array
// input
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20], i, max = 0, n;
    printf("enter the number you want to print out: ");
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

    max = a[5];

    for (i = 0; i < n; i++) // define one elimet to find out the minimun value of array

    {
        if (max < a[i])
        {
            max = a[i]; // find min value which i given in array
        }
    }
    printf("the maximum number is: %d", max); // print the minimum value of a array
}

// output
/*enter the number you want to print out: 8
enter the num: 15
enter the num: 546
enter the num: 14
enter the num: 12
enter the num: 564
enter the num: 514
enter the num: 12
enter the num: 456
the maximum number is: 564  */