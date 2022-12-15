//wap in c to print 1st 'n' even numbers.
//input
#include<stdio.h>
void main()
{
	int no,count;
	printf("how many even number you want to print\n");
	scanf("%d",&no);
	for(count=1;count<=no;count++)
	{
		if(count%2==0)
		{
			printf("%d\n",count);
		}
	}
}

//output
/*
how many even number you want to print
10
2
4
6
8
10
*/