// input
#include <stdio.h>
int main()
{
    int num, i, j, c = 1;
    printf("enter the value of n number ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%d", c);
            c++;
        }
        printf("\n");
    }
}

/*output
enter the value of n number 5

1
23
456
78910
*/