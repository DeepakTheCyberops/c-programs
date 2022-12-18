// wap to perform the diffrent diffrent arithmatic operatora such as multiply,add,subtraction,divison etc also by using user define function in c.
// input
#include <stdio.h>
int sum(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int main()
{
	int a, b, result, choice, y_n;
	/*use do wile for use calculating again*/
	do
	{
		printf("you can perform the forllowintg operation:\n");
		printf("\n 1.addition");
		printf("\n 2.subtration");
		printf("\n 3.multiplication");
		printf("\n 4.divison");
		printf("\n 5.exit");
		printf("enter you choice:");
		scanf("%d", &choice);
		printf("\n enter the value of a ");
		scanf("%d", &a);
		printf("\n enter the value of b ");
		scanf("%d", &b);
		/*use switch to diffrent type of calculations*/
		switch (choice)
		{
		case 1:
			result = sum(a, b);
			printf("\n sum=%d", result);
			break;

		case 2:
			result = sub(a, b);
			printf("\n subtraction=%d", result);
			break;

		case 3:
			result = mul(a, b);
			printf("\n multiplication=%d", result);
			break;

		case 4:
			result = div(a, b);
			printf("\n divison=%d", result);
			break;

		default:
			printf("\n sum=%d", result);
			break;
		}
		printf("\n press any no. to do Continue & use 0 for end\n");
		scanf("%d", &y_n);
	} while (y_n != 0);
}
// function deffination
int sum(int x, int y)
{
	int z;
	z = x + y;
	return z;
}

int sub(int x, int y)
{
	int z;
	z = x - y;
	return z;
}

int div(int x, int y)
{
	int z;
	z = x / y;
	return z;
}

int mul(int x, int y)
{
	int z;
	z = x * y;
	return z;
}