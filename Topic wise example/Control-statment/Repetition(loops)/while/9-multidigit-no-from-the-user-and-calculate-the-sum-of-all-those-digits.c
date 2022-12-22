//wap in c to input a multidigit no. from the user and calculate the sum of all those digits.
//input
#include<stdio.h>
int main()
{
	int num, sum=0, digit,a;
	printf("enter the multidigit no.");
	scanf("%d",&num);
	while(a!=0)
	{
	digit=num%10;
	sum=sum+digit;
	num=num/10;
	}
	printf("sum of all digit:/d",sum);
}
