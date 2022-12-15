//write a function to calculte the factorial value of any integer entered through the keybord 
#include<stdio.h>
int fact(int);
int main()
{
	int num;
	int factorial;
	printf("\n enter a number:");
	scanf("%d",&num);
	factorial=fact(num);
	printf("factorial of %d = %d\n",num,factorial);
	//result 0;
}
// function definition

int fact(int num)
{
	int i;
	int factorial=1;
	for(i=1;i<=num;i++)
	factorial=factorial*i;
	return(factorial);
}
