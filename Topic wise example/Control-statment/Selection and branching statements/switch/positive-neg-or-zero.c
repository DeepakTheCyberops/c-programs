#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    switch (num > 0)
    {
        // Num is positive
        case 1:
            printf("%d is positive.", num);
        break;

        // Num is either negative or zero
        case 0:
            switch (num < 0)
            {
                case 1: 
                    printf("%d is negative.", num);
                    break;
                case 0:
                    printf("%d is zero.", num);
                    break;
            }
        break;
    }

    return 0;
}

//output 1
/*Enter any number: 0
0 is zero. */


//output 2
/*Enter any number: -4
-4 is negative*/