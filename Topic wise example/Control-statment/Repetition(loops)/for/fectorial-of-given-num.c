/*find out the factorial of any number given by the user*/

// input
#include <stdio.h>
int main()
{
    int num, sum = 1, i;
    printf("enter the factorial value: ");
    scanf("%d", &num);
    for (i = 1; i <=num; i++)
    {
        sum = sum * i;
    }
    printf("sum of factorial is: %d",sum);
}


//output
/*enter the factorial value: 5
sum of factorial is: 120  */