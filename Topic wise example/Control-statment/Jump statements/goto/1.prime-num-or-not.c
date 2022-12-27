//wap to check whether a given number is prime or not 
//input
#include <stdio.h>
int main()
{
    int n, i = 2;
    printf("Enter number: ");
    scanf("%d", &n);
again:
    /*use this if statments to print it is a prime number*/
    if (i == n)
    {
        printf("prime");
        return 0;
    }
    /*this if statment to print it is not a prime number*/
    if (n % i == 0)
    {
        printf("Not prime");
        return 0;
    }
    /*use i for for making loop with the help of goto statments */
    i++;
    goto again;
}

//output 1
/*Enter number: 9
Not prime  */

//output 2
/*Enter number: 5
Not prime */