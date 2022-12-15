//input
#include <stdio.h>
int main()
{
    int a[5],i,max=0;
    printf("enter the number ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);          //take input from the user
    }
    for(i=0;i<5;i++)                //define one elimet to find out the minimun value of array

    {
        if (max<a[i])
        {
            max = a[i];             //find min value which i given in array
        }
        
    }
    printf("the maximum number is: %d",max);    //print the minimum value of a array
}

//output
/*enter the number 5
2
88

6

55
the maximum number is: 88         
*/