#include<stdio.h>
int main()
{
	int num,div,prime_no,j;
	printf("enter the value of no for prime function\n");
	scanf("%d",&num);
	for(div=2;div<=num;div++)
	{
		if(num%div==0)
		{
			prime_no=1;
			for(j=2;j<=div/2;j++)
			{
				if(div%j==0)
				{
					prime_no = 0;
					break;
				}
			}
			if(prime_no==1)
			{
				printf("%d",div);
			}
		}
	}
}
