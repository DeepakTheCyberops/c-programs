#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20], i, n;
    printf("enter how many number you want to print: ");
    scanf("%d", &n);
    if (n > 20)
    //if enterd number is greater than it's show invalid statment 
    {
        printf("you give greater number than 20\n");
        exit(0);
    }
    /*user this fore loop for take input number by multiple time*/
    for (i = 0; i < n; i++)
    {
        printf("enter the num: ");
        scanf("%d", &a[i]); // take input from the user
    }

    printf("revirse number is: ");
    /*use this for loop for reverse the number*/
    for (i = n-1; i >= 0; i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

//output
/*enter how many number you want to print: 5
enter the num: 1
enter the num: 2
enter the num: 3
enter the num: 4
enter the num: 5
revirse number is: 5 4 3 2 1  */