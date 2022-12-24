// input
#include <stdio.h>
int main()
{
    int num, i = 1;
    printf("Enter the number to print the table: ");
    scanf("%d", &num);

    do
    {
        printf("\n%d * %d = %d", num, i,(num * i));
        i++;
    } while (i <=10);
}

//output
/*Enter the number to print the table: 5

5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50 */