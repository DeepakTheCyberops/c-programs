//input
#include <stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9},i,sum=0;
    for ( i = 0; i < 9; i++)
    {
        sum =sum + a[i];
    }
    printf("\nthe sum of all 9 eliment is: %d",sum);
}

//output
/*the sum of all 9 eliment is: 45*/