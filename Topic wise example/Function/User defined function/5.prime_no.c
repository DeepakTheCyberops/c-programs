// header file
#include <stdio.h>
// function to find the prime numbers
void prime()
{
    int i, j, c;

    printf("Prime numbers between 1 and 100 are: ");
    // finding the prime numbers between 1 and 100 
    for(j=1;j<=100;j++)
    {
        c = 0;
        // counting the number of factors
        for (i = 1; i <= j; i++)
        {
            if (j % i == 0)
                c++;
        }
        if (c == 2)
            printf("%d\n", j);
    }
}
// main function
int main()
{
    // calling the function to find the prime numbers
    prime();
}


//output
/*
Prime numbers between 1 and 100 are: 2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
*/