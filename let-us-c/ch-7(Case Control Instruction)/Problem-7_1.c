/*Problem 7.1
Write a menu driven program which has following options:
1. Factorial of a number
2. Prime or not
3. Odd or even
4. Exit
Once a menu item is selected the appropriate action should be taken and once this action is finished, the menu should reappear. Unless the user selects the 'Exit' option the program should continue to work.
Program
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice, num, i, fact;

    while (1)
    {
        printf("\n1. Factorial\n");
        printf("2. Prime\n");
        printf("3. Odd/Even\n");
        printf("4. Exit\n");
        printf("Your choice?");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter number: ");
            scanf("%d", &num);
            fact = 1;
            for (i = 1; i < num; i++)
                fact = fact * i;
            printf("Factorial value = %d\n", fact);
            break;
        case 2:
            printf("\nEnter number: ");
            scanf("%d", &num);
            for (i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    printf("Not a prime number\n");
                    break;
                }
            }
            if (i == num)
                printf("Prime number\n");
            break;
        case 3:
            printf("\nEnter number:\n");
            scanf("%d", &num);
            if (num % 2 == 0)
                printf("Even number\n");
            else
                printf("Odd number\n");
            break;
        case 4:
            exit(0); /* Terminates program execution */
        default:
            printf("Wrong choice!\a\n");
        }
    }
    return 0;
}

//output
/*

1. Factorial
2. Prime
3. Odd/Even
4. Exit
Your choice?1

Enter number: 5
Factorial value = 24

1. Factorial
2. Prime
3. Odd/Even
4. Exit
Your choice?2

Enter number: 12
Not a prime number

1. Factorial
2. Prime
3. Odd/Even
4. Exit
Your choice?3

Enter number:
12
Even number

1. Factorial
2. Prime
3. Odd/Even
4. Exit
Your choice?4
*/
