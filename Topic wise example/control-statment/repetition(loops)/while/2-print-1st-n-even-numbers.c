// wap in c to print 1st 'n' even numbers.
//n=last

//input
#include<stdio.h>
void main()
{
	int start=1,last;
	printf("\nenter the value of start\n");
	scanf("%d",&last);
	printf("even no. between 1 to %d is ",last);
	while(start<=last)
	{
	if(start%2==0)
		{
		printf("\n%d",start);
		}
	start++;
	}
}

//output
/*
enter the value of start
10

2
4
6
8
10
*/
