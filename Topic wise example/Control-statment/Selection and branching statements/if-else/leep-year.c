//input
#include <stdio.h>
int main()
{
    int year;
    printf("enter the year no. to check it a leap year or not: ");
    scanf("%d",&year);
    if (year%400==0&&year%100||year%4==0)
    {
        printf("it is a leap year");
    }
    else
    {
        printf("it is not a leap year");
    }   
}

//output
/*
enter the year no. to check it a leap year or not: 2024
it is a leap year  
*/