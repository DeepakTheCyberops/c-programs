// reverse the number by the using array
// input
#include <stdio.h>
int main()
{
    int n, rev = 0, rem;
    /*take input from user*/
    printf("enter the multidigit num: ");
    scanf("%d", &n);
    /*use do while for reverse the num */
    do
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    } while (n != 0);
    /*print the reverse the number*/
    printf("%d", rev);
}

//output
/*enter the multidigit num: 456
654  */