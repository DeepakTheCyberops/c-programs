#include<stdio.h>
int sum_d(int);
int main()
{
	int n, result;
	printf("\n enter the multidigit no: ");
	scanf("%d",&n);
	result=sum_d(n);
	printf("\n the sum of all digit of %d is: %d",n,result);
}

int sum_d(int num)
{
	int rem, sum=0;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
return sum;
}

