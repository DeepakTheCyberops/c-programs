//input
#include <stdio.h>
int main()
{
    int month;
    printf("enter the month number: ");
    scanf("%d",&month);
    if (month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        printf("number of days in this month is 31");
    }
    else if (month==4||month==6||month==9||month==11)
    {
        printf("number of days in this month is 30");
    }
    else
    {
        printf("number of days in this month is 28 or 29");
    }
    
}

//output
/*enter the month number: 2
number of days in this month is 28 or 29 */