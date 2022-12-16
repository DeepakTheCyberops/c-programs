// input
#include <stdio.h>
int main()
{
    float num[5], sum = 0;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("enter the number: ");
        scanf("%f", &num[i]); // take input from user
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + num[i]; // sum of array
    }
    printf("the sum of array is: %f", sum); // print the sum of a array
}

// output
/*enter the number
enter the number: 5
enter the number: 2
enter the number: 4
enter the number: 6
enter the number: 89
the sum of array is: 106.000000   
*/