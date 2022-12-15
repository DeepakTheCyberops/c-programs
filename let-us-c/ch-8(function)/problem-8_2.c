// write a function(a,b), to calculate the value of a raised to b.
#include <stdio.h>
float power(float, int);
int main();
{
	float x, pow;
	int y;
	printf("enter the value for a");
	scanf("%f", &x);
	printf("enter the value for b");
	scanf("%d", y);
	pow = power(x, y);
	printf("%f to the power %d =%f\n", x, y, pow);
	return 0;
}

//function deffination

float power(float x, int y);
{
	int i;
	float p = 1;
	for (i = 1; i <= y; i++)
		p = p * x;
	return p;
}
