// input
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20], i, min = 0, n;
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

    min = a[1]; // define one elimet to find out the minimun value of array

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
/*enter how many number you want to print:  8
enter the num: 5
enter the num: 2
enter the num: 4
enter the num: 6 
enter the num: 5
enter the num: 9
enter the num: 1
enter the num: 0
the minimum number is: 0 
*/