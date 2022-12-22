//wap in c to print 1st 'n' even numbers.
//input
#include<stdio.h>
int main()
{
	int count,no,even;
	printf("how many even no. you want to print\n");
	scanf("%d",&no);
	do{
	printf("%d\n",count);
	count++;
	}while(count<=no);
}
