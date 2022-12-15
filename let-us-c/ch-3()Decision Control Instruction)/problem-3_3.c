// Problem 3.3
// Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not.

// input
/* Check whether a year is leap or not */
#include<stdio.h>
int main()
{
    int yr;
    printf("\nEnter a year: ");
    scanf("%d", &yr);
    if (yr % 100 == 0)
    {
        if(yr % 400 == 0)
            printf("Leap year\n");
        else printf("Not a Leap year\n");
    }
    else
    {
        if (yr % 4 == 0)
            printf("Leap year\n");
        else
            printf("Not a leap year\n");
    }

    return 0;
}


//output
/*
Enter a year: 2000
Leap year
*/

