//wap in c to calculate the average of five no.
//output
#include<stdio.h>
int main()
{
	float no,sum=0,avg,count=1;
	while(count<=5)
	{
	printf("print the value of no. ");
	scanf("%f",&no);
	sum=sum+no;
	count++;
	}
	printf("\nthe sum value of 5 no. is %f",sum);
	avg=sum/5;
	printf("\nthe average of five no. is:%f",avg);
}


//output
/*
print the value of no. 10  
print the value of no. 10
print the value of no. 10
print the value of no. 10
print the value of no. 10

the sum value of 5 no. is 50
the average of five no. is:10 
*/
