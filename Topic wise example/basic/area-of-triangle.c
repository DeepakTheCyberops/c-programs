#include <stdio.h>

int main() {
	float area_of_triangle, hight, base;
	printf("enter the value of hight: \n");
	scanf("%f",&hight);
	printf("enter the value of base: \n");
	scanf("%f",&base);
	area_of_triangle = (hight * base) / 2;
	printf("area of triangle : %f",area_of_triangle);
	return 0;
}

//output
/*
enter the value of hight: 
8
enter the value of base: 
6
area of triangle : 24.000000  
*/