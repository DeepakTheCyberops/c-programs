//input
#include <stdio.h>
int main()
{
    float num[5],sum=0,avg;
    int i;
    printf("enter the number\n");
    for(i=0;i<5;i++)
    {
        scanf("%f",&num[i]);                    //take input from the user 
    }
    for ( i = 0; i < 5; i++)                        
    {
        sum = sum + num[i];                     //sum of array 
    }
    printf("the sum of array is: %f\n",sum);      //print the sum of a array
    avg = sum/5;
    printf("the avrage of array is: %f\n",avg);  //print the avrage of a array
}

//output
/*enter the number

5
5
5
5
5
the sum of array is: 25.000000the avrage of array is: 5.000000       
*/