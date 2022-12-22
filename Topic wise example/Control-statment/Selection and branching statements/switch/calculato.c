// input
#include <stdio.h>
int main()
{
    int y_n, choice;
    float a, b, sum, sub, div, mul;
    /*use do wile for use calculating again*/
    do
    {
        printf("Which operation perform you want to do:\n");
        printf("\n 1.addition");
        printf("\n 2.subtration");
        printf("\n 3.multiplication");
        printf("\n 4.divison");
        printf("\n 5.exit");
        printf("\nenter you choice:");
        scanf("%d", &choice);
        printf("\n enter the value of a: ");
        scanf("%f", &a);
        printf("\n enter the value of b: ");
        scanf("%f", &b);
        /*use switch to diffrent type of calculations*/
        switch (choice)
        {
        case 1:
            sum = a + b;
            printf("\n sum=%f", sum);
            break;

        case 2:
            sub = a - b;
            printf("\n subtraction=%f", sub);
            break;

        case 3:
            mul = a * b;
            printf("\n multiplication=%f", mul);
            break;

        case 4:
            div = a / b;
            printf("\n divison=%f", div);
            break;

        default:
            printf("\nyou enter a wrong number");
            break;
        }
        printf("\n Enter any no. to Continue and 0 for end\n");
        scanf("%d", &y_n);
    } while (y_n != 0);
}

// output
/*Which operation perform you want to do:

 1.addition
 2.subtration
 3.multiplication
 4.divison
 5.exit
enter you choice:3

 enter the value of a: 562.2451

 enter the value of b: 345.645

 multiplication=194337.203125
 Enter any no. to Continue and 0 for end
6
Which operation perform you want to do:

 1.addition
 2.subtration
 3.multiplication
 4.divison
 5.exit
enter you choice:2

 enter the value of a: 65465

 enter the value of b: 546

 subtraction=64919.000000
 Enter any no. to Continue and 0 for end
0
*/