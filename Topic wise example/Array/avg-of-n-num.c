// input
#include <stdio.h>
int main()
{
    int a[20], sum=0, i, n,avg;
    printf("enter how many number you want to print: "); // enter the 40 bit vlue
    scanf("%d", &n);
    if (n > 20)
    {
        printf("you give greater number than 20\n");
    }
    for (i = 0; i < n; i++) // take value from user
    {
        printf("enter the number ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) // sum of given array
    {
        sum = sum + a[i];
    }

    printf("the sum of array is: %d\n", sum); // print the sum of array

    avg = sum / n;
    printf("the average of sum is: %d\n",avg);
}

//output
/*
enter how many number you want to print: 5
enter the number 1
enter the number 2
enter the number 3
enter the number 4
enter the number 5
the sum of array is: 15
the average of sum is: 3
*/