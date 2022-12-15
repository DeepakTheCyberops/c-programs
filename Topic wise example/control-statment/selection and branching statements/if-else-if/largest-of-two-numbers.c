//input
#include <stdio.h>
int main()
{
    int num1, num2;
    // Ask user to enter the first numbers
    printf("Enter first no. \n");
    // Read numbers from the user
    scanf("%d",&num1);
    // Ask user to enter the second numbers
    printf("Enter second no. \n");
    // Read numbers from the user
    scanf("%d",&num2);
    if(num1 > num2)
    {
        printf("%d first is Largest\n", num1);
    }
    else if (num2 > num1)
    {
        printf("%d second is Largest\n", num2);
    }
    else
    {
        printf("Both are Equal\n");
    }
    return 0;
}

//output
/*
Enter first no. 
8
Enter second no. 
9
9 second is Largest
*/