// input
#include <stdio.h>
int main()
{
    int day;
    printf("Enter the monthe num: ");
    scanf("%d", &day);
    /*use switch to find days name by numbers*/
    switch (day)
    {
    case 1:
        printf("Monday'");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("this is not a day number");
        break;
    }
}


//output
/*Enter the monthe num: 6
Saturday */