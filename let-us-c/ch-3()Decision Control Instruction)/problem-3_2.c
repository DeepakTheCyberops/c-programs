//Problem 3.2
//Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number.

//input
/* Check whether a number is even or odd */
#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter any number: ");
	scanf("%d", &n);
	if (n%2==0)
	{
		printf("The number is even\n");
	}
	else
	{
	printf("The number is odd\n");
	}
	return 0;
}

//input
/*
Enter any number: 22
The number is even
*/