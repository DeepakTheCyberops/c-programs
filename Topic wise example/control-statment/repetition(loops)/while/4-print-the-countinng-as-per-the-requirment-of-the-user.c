//wap in c to print the countinng as per the requirment of the user.

//input
#include<stdio.h>
int main()
{
	int first_value=1,last_value;
	printf("enter the value of first_value \n");
	scanf("%d",&first_value);
	printf("enter the value of last_value \n");
	scanf("%d",&last_value);
	printf("the value between the %d to %d is \n",first_value,last_value);
	while(first_value<=last_value)
	{
	printf("\n%d",first_value);
	first_value++;
	}
}

//output
/*
enter the value of first_value 
1
enter the value of last_value 
10
the value between the 1 to 10 is 

1
2
3
4
5
6
7
8
9
10
*/
