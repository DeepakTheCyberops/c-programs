/*Problem 5.2
Write a program to find the factorial value of any number entered through the keyboard.
*/
#include <stdio.h>
int main()
{
    int num, i, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    fact = i = 1;
    while (i <= num)
    {
        fact = fact * i;
        i++;
    }
    printf("Factorial value of %d %d\n", num, fact);
    return 0;
}

//output
/*Enter a number: 7
Factorial value of 7 5040
*/