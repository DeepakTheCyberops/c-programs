//input
#include <stdio.h>
int main()
{
    int a[5],i,min=0;
    printf("enter the number ");
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);      //take input from the user
    }

    min = a[1];                 //define one elimet to find out the minimun value of array
    
    for(i=0;i<5;i++)
    {
        if (min>a[i])
        {
            min  = a[i];        //find min value which i given in array 
        }
        
    }
    printf("the minimum number is: %d",min);    //print the minimum value of a array
}

//output
/*
enter the number 5
5
2
55
1
the maximum number is: 1         
*/
