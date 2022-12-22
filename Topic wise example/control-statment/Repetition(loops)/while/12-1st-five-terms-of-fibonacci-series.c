//12. wap in c to print 1st five terms of fibonacci series
//displays the first two terms which is always 0 and 1 and represent with t1 and t2 
//input
#include<stdio.h>
int main()
{
	int t1=0,t2=1, nextterm=0, n; 
	printf("enter a positive number: ");
	scanf("%d",&n);
	printf("fibonacci series: %d %d",t1,t2);
	nextterm=t1+t2;
	while(nextterm<=n)
	{
	printf("%d",nextterm);
	t1=t2;
	t2=nextterm;
	nextterm=t1+t2;
	}
}

//output
/*
enter a positive number: 5
fibonacci series: 0 11235
*/
