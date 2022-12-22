//wap in c to print 1st 'n' odd no.
//n=last

//input-----
#include<stdio.h>
int main()
{
	int start=1,last,counter=0;
	printf("enter the value of last\n");
	scanf("%d",&last);
	printf("value of %d odd no. is\n",last);
	while(counter!=last)
	{
	printf("%d\n",start);
	start=start+2;
	counter=counter+1;
	}
}



//output-----
/*
enter the value of last
10
value of 10 odd no. is
1
3
5
7
9
11
13
15
17
19
*/
