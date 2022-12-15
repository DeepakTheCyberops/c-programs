//wap in c to print the square of 1st 'n' no.
//input 
#include<stdio.h>
int main()
{
	int square,no,count=0,time;
	printf("how many number you want to square\n");
	scanf("%d",&time);
	printf("----------");
	while(count<=time);
	{
	printf("enter the quare value");
	scanf("%d",&no);
	square=no*no;
	printf("the value of square is\n%d",square);
	count++;
	}
}

