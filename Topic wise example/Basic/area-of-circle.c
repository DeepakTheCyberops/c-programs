#include <stdio.h>

int main() 
{
	float area_of_circle, radius, pi = 3.14;
	printf("enter the value of radius: \n");
	scanf("%f",&radius);
	area_of_circle = pi * radius * radius;
	printf("area of circle : %f",area_of_circle);
	return 0;
}

//output
/*
enter the value of radius: 5 
area of circle : 78.500000
*/