/*Problem 9.3

Figure 9.4 shows three memory locations and values stored in them. Write a program to declare variables that implement the relationship shown. How will you print the values and addresses shown in the figure? On which machine the program should be executed to get such addresses?
*/
#include <stdio.h>
int main()
{
float x = 3.14;
float *y;
float **z;
y= &x;
z = &y;
printf("%p%p %p\n", &x, &y, &z);
printf("%p %p\n", y, z); printf("%f %f %f", x, *y, **z); return 0;
}

//output
/*
0x7fff0acc4b0c0x7fff0acc4b00 0x7fff0acc4af8
0x7fff0acc4b0c 0x7fff0acc4b00
3.140000 3.140000 3.140000
*/