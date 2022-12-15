//we are going to print a multiplication table of an input number N.
//input
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("which table you want to print\n");
	scanf("%d",&n);
	do{
	printf("%d*%d=%d\n",n,i,n*i);
	i++;
	}while(i<=10);
}
//output
/*
which table you want to print
6
6*1=6
6*2=12
6*3=18
6*4=24
6*5=30
6*6=36
6*7=42
6*8=48
6*9=54
6*10=60
*/

