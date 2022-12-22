#include <stdio.h>

int main() 
{
	float math, scince, sst, hindi, english, avg;
	printf("enter the value of math: \n");
	scanf("%f",&math);
	printf("enter the value of scince: \n");
	scanf("%f",&scince);
	printf("enter the value of sst: \n");
	scanf("%f",&sst);
	printf("enter the value of hindi: \n");
	scanf("%f",&hindi);
	printf("enter the value of english: \n");
	scanf("%f",&english);
	avg = (math + scince + sst + hindi + english) / 5;
	printf("area of avrage %.2f",avg);
	return 0;
}

//output
/*
enter the value of math: 
50
enter the value of scince: 
50 
enter the value of sst: 
50
enter the value of hindi: 
50
enter the value of english: 
50
area of avrage 50.00       
*/