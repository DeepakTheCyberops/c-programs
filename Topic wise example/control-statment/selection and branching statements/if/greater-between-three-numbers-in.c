//input
#include <stdio.h>
int main()
{
    int n1, n2, n3;

    printf("Enter three different numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("%d is the largest number.", n1);

    if (n2 >= n1 && n2 >= n3)
        printf("%d is the largest number.", n2);

    if (n3 >= n1 && n3 >= n2)
        printf("%d is the largest number.", n3);

    return 0;
}

//output
/*
Enter three different numbers: 5
2
9
9 is the largest number.  */