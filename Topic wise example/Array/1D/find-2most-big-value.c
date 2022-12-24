// input
#include <stdio.h>
int main()
{
    int a[20], max, i, n, loc, tosearch, smax, found, temp, eql;
    printf("\nenter the range: ");
    scanf("%d", &n);
    /*-------------------------------------------------------------------------------------------------------*/
    for (i = 0; i < n; i++)
    {
        printf("enter the number: ");
        scanf("%d", &a[i]); // take input from the user
    }
    max = a[0];
    for (i = 0; i < n; i++) // define one elimet to find out the minimun value of array

    {
        if (max < a[i])
        {
            max = a[i]; // find min value which i given in array
        }
    }
    printf("\n------------------------------------------------------------");
    printf("\nthe maximum number is: %d", max); // print the minimum value of a array
    /*-------------------------------------------------------------------------------------------------------*/
    printf("\nenter the number to find the location of element: ");
    scanf("%d", &tosearch);
    // eql = tosearch;
    printf("\n------------------------------------------------------------");

    for (i = 0; i < n; i++)
    {
        if (a[i] == tosearch)
        {
            found = i;
            break;
        }
    }
    if (found == i)
    {
        printf("\nthe location of number is: %d", found + 1);
    }
    /*-------------------------------------------------------------------------------------------------------
    swap the vaalue to send the max value in last */
    temp = a[found];
    a[found] = a[n-1];
    a[n-1] = temp;

    /*-------------------------------------------------------------------------------------------------------
    use this for loop for see it is work or not*/
    for (i = 0; i < n; i++)
    {
        printf("\nenter the number: %d", a[i]);
    }
    smax = a[0];
    // smax != max;
    /*-------------------------------------------------------------------------------------------------------
    use this for loop for second max value*/
    for (i = 0; i < n - 1; i++)
    {
        if (smax < a[i])
        {
            smax = a[i];
        }
    }
    printf("\n------------------------------------------------------------");
    printf("\nthe second greatest number: %d", smax);
}

//output
/*enter the range: 10
enter the number: 100
enter the number: 90
enter the number: 80
enter the number: 70
enter the number: 60
enter the number: 50
enter the number: 40
enter the number: 30
enter the number: 20
enter the number: 10

------------------------------------------------------------
the maximum number is: 100
enter the number to find the location of element: 100

------------------------------------------------------------
the location of number is: 1
enter the number: 10
enter the number: 90
enter the number: 80
enter the number: 70
enter the number: 60
enter the number: 50
enter the number: 40
enter the number: 30
enter the number: 20
enter the number: 100
------------------------------------------------------------
the second greatest number: 90  */