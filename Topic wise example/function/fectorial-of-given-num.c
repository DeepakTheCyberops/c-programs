/*find out the factorial of any number given by the user*/

// input
#include <stdio.h>
/*Declare the function name*/
int fectorial(int);
int main()
{
    int num, result;
    printf("enter the factorial value: ");
    scanf("%d",&num);
    result = fectorial(num);
    printf("sum of factorial is: %d", result);
}

/*Declare the function */
int fectorial(int x)
{
    int i,num,sum=1;
    for (i = 1; i <= x; i++)
    {
        sum = sum * i;
    }
    return sum;
}


//output
/*enter the factorial value: 5
sum of factorial is: 120 */