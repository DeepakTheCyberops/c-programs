// input
#include <stdio.h>
/*declare function name */
int cube(int);
int main()
{
    int num, result;
    printf("enter the number for cube: ");
    scanf("%d", &num);
    /*call function*/
    result = cube(num);
    printf("cube => %d", result);
}
/*function definition */
int cube(int n)
{
    int c;
    c = n * n * n;
}

//output
/*enter the number for cube: 5
cube => 125 */