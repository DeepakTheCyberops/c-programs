// input
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10];
    int i, n, n1, temp;

    printf("enter how many number you want to print: "); // enter the 40 bit vlue
    scanf("%d", &n);
    if (n > 10)
    {
        printf("you give greater number than 20\n");
        exit(0);
    }

    for (i = 0; i < n; i++)
    {
        printf("enter the num: ");
        scanf("%d", &a[i]); // take input from the user
    }

    for (i = 0; i < n; i++)
    {
        printf("\nfirst array a[%d]: %d", i, a[i]);
    }
    n1 = n;
    /*----------------------------------------------------------------------------------*/
    for (i = 0; i < n - 1; i++)
    {
        temp = a[i];
        a[i] = a[n - 1];
        a[n - 1] = temp;
        n--;
    }
    for (i = 0; i < n1; i++) // n2 = 4;
    {
        printf("\nswap array a[%d]: %d", i, a[i]);
    }
}

/*output
enter how many number you want to print: 5 
enter the num: 21
enter the num: 22
enter the num: 23
enter the num: 24
enter the num: 25 

first array a[0]: 21
first array a[1]: 22
first array a[2]: 23
first array a[3]: 24
first array a[4]: 25
swap array a[0]: 25
swap array a[1]: 24
swap array a[2]: 23
swap array a[3]: 22
swap array a[4]: 21*/