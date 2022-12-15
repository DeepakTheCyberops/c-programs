//While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. If quantity and price per item are input through the keyboard, write a program to calculate the total expenses.

//input
#include<stdio.h>
int main()
{

	int qty, dis;
	float rate, tot;
	printf("Enter quantity and rate\n");
	scanf("%d %f",&qty, &rate);
	if ( qty > 1000)
		dis = 10;
	else
		dis = 0;
	tot = ( qty * rate) - ( qty * rate * dis / 100);
	printf("Total expenses = Rs. %.2f\n", tot);
	return 0;
}

//output
/*
Enter quantity and rate
10000
10
Total expenses = Rs. 90000.00
*/
