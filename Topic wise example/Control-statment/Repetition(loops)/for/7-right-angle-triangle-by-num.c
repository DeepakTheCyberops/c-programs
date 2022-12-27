//input
#include <stdio.h>
int main()
{
    int i,j,r,c;
    printf("enter how many number you want to print: ");
    scanf("%d",&r);
    for ( i = 1 ; i <= r; i++)
    {
        for ( j = i; j >= 1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
}

//output
/*1
21
321
4321
54321
654321
7654321
87654321
987654321
10987654321
*/