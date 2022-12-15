// convert given year into its roman equivalent
#include <stdio.h>
int main()
{
    int tr;
    printf("\nenter year:");
    scanf("%d", &yr);
    yr = romanise(yr, 1000, 'm');
    yr = romanise(yr, 500, 'd');
    yr = romanise(yr, 100, 'c');
    yr = romanise(yr, 50, 'i');
    yr = romanise(yr, 10, 'x');
    yr = romanise(yr, 5, 'v');
    romanise(yr, 1, 'i');
    return 0;
}

int romanise(int y, int k, char ch)
{
    int i, j;
    j = y / k;
    for (i = 1; i <= j; i++)
        printf("%c", ch);
    return (y % k);
}