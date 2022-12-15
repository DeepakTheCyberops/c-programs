//input
#include <stdio.h>
int main()
{
    float num[5],sum=0;     
    int i;
    printf("enter the number\n");
    for(i=0;i<5;i++)
    {
        scanf("%f",&num[i]);                    //take input from user 
    }
    for ( i = 0; i < 5; i++)
    {
        sum = sum + num[i];                    //sum of array
    }
    printf("the sum of array is: %f",sum);  //print the sum of a array
}

//output
/*enter the number

5
5
5
5
5
the sum of array is: 25.000000       
*/