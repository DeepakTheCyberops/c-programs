//maximum of n number by array
//input
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20],i,max=0,n;
    printf("enter the number you want to print out: ");
    scanf("%d",&n);
    if (n > 20)
    {
        printf("you give greater number than 20\n");
        exit (0);
    }
    for(i=0;i<n;i++)
    {
        printf("enter the num: ");
        scanf("%d",&a[i]);          //take input from the user
    }
    for(i=0;i<n;i++)                //define one elimet to find out the minimun value of array

    {
        if (max<a[i])
        {
            max = a[i];             //find min value which i given in array
        }
        
    }
    printf("the maximum number is: %d",max);    //print the minimum value of a array
}

//output
/*enter the number you want to print out: 5
enter the num: 1
enter the num: 23
enter the num: 5
enter the num: 4
enter the num: 2
the maximum number is: 23 */