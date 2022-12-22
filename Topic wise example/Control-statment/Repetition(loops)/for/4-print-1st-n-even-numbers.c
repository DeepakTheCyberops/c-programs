// wap in c to print 1st 'n' even numbers.
// input
#include <stdio.h>
int main()
{
	int count, min, max;
	printf("enterd the minimum value\n");
	scanf("%d", &min);
	printf("enterd the maximum value\n");
	scanf("%d", &max);
	printf("counting from %d to %d\n %d\n", min, max);
	for (count = min; count <= max; count++)
	{
		printf("%d\n", count);
	}
}

//output
/*
enterd the minimum value
10
enterd the maximum value
22
counting from 10 to 22
 0
10
11
12
13
14
15
16
17
18
19
20
21
22
*/