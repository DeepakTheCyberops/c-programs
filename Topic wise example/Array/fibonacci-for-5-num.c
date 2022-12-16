//wap to print a fibonacci series for 5 num 
//input
#include <stdio.h>
int main()
{
    int sum,a[5],i;
    /*decleare two index a[0] or a[1]*/
    a[0] = 0, a[1] = 1;

    printf("first two value is: %d %d",a[0],a[1]);
    
    /*use loop for remaning 3 value */
    for(i=2;i<5;i++)
    {
        sum = a[0]+ a[1];
        printf ("\n%d",sum);
        a[0] = a[1];
        a[1] = sum;
    }
}

/*
first two value is: 0 1
1
2
3                                                                                                                                                  
*/