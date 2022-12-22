//wap in c to print 1st 'n' odd no.
//input
#include<stdio.h>
int main()
{
	int odd,count;
	printf("how many odd no. you want to print: \n");
	scanf("%d",&odd);
	for(count=1;count<=odd;count++)
	{
		if(count%2!=0)
		{
			printf("%d\n",count);
		}
	}
}

//output
/*
how many odd no. you want to print: 
50
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
21
23
25
27
29
31
33
35
37
39
41
43
45
47
49
*/