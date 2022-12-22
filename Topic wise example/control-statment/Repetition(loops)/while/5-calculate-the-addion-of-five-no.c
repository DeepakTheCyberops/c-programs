//wap in c to calculate the addison of five no.

//input
#include<stdio.h>
int main()
{
	int num,addison,counter=1;
	printf("enter the number \n");
	scanf("%d",&num);
	while(counter<5)
	{
	printf("%d\n",num);
	addison=addison+num;
	counter++;
	}
	printf("addison of 5 digit is %d \n",addison);
}

//output
