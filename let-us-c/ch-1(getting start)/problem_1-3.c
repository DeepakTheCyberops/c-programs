//input
#include <stdio.h>
int main()

{
    int m1, m2, m3, m4, m5, aggr;
    float per;
    printf("\nEnter marks in 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    aggr = m1 + m2 + m3 + m4 + m5;
    per = aggr / 5;
    printf("Aggregate Marks = %d\n", aggr);
    printf("Percentage Marks = %f\n", per);
    return 0;
}

/*output
Enter marks in 5 subjects: 45
35
98
68
78
Aggregate Marks = 324
Percentage Marks = 64.00*/