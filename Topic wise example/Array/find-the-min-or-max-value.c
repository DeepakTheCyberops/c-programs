/*wap in c to find out the max and min of an array of n element */
// input
#include <stdio.h>
int main()
{
    int max, min, a[20], n, i;
    printf("enter the value of array: ");
    scanf("%d",&n);

    if (n > 20)
    {
        printf("you enter the grater value then the array space");
    }

    for (i = 0; i < n; i++)
    {
        printf("enter the number ");
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

    printf("The maximum value is: %d\n", max);

    min = a[1]; // define one elimet to find out the minimun value of array

    for (i = 0; i < n; i++)
    {

        if (min > a[i])
        {
            min = a[i]; // find min value which i given in array
        }
    }
    printf("the minimum number is: %d\n", min); // print the minimum value of a array
}


//output
/*enter the value of array: 5
enter the number 36
enter the number 2
enter the number 15
enter the number 4
enter the number 6
The maximum value is: 36
the minimum number is: 2
*/