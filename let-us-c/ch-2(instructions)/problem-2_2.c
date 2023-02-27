//if a five-digit num is imput through the keybord, write a program to reverse the number.

//input
#include<stdio.h>
int main()
{
	int n,d5,d4,d3,d2,d1;
	long int revnum; 	/* offers a bigger range of integers */
	printf("\nEnter a five digit number (less than 32767):"); scanf("%d", &n);
	d5 = n % 10;	/* 5th digit */
	n = n /10; 	/* remaining digits */
	d4 = n % 10;	/* 4th digit */
	n=n/10;  	/* remaining digits */
	d3 = n % 10;	/* 3rd digit */
	n = n /10;	/* remaining digits */
	d2 = n % 10;	/* 2nd digit */
	n = n / 10;	/* remaining digits */
	d1 = n % 10;	/* 1st digit */
	revnum = d5 * 10000+ d4 * 1000+ d3 * 100 + d2 * 10 + d1;
	/*specifier %ld for in user for printing a long integer*/
	printf("the reversed number is %ld\n", revnum);
	return 0;
}


//output
/*
Enter a five digit number (less than 32767):65421
the reversed number is 12456
*/
