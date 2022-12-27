// input
#include <stdio.h>
int main()
{
    int option;
    float fahrenheit, centigrade;
    printf("\nConvert the fahrenheit degrees to convert in centigrade degress or vice versa : ");
    printf("\nuse option");
    printf("\n1.centigrade to fahrenheit");
    printf("\n2.fahrenheit to centigrade\n");
    printf("--------------------------------------\n");
    scanf("%d", &option);
    /*use to switch case for temperature*/
    switch (option)
    {
    case 1:
        printf("Enter the value: ");
        scanf("%f", &centigrade);
        fahrenheit = (centigrade * 9 / 5) + 32;
        printf("\nConvet to centigrade to fahrenheit: %f", fahrenheit);
        // printf("%f",&centigrade);
        break;

    case 2:
        printf("Enter the value: ");
        scanf("%f", &fahrenheit);
        centigrade = (fahrenheit - 32) * 5 / 9;
        printf("\nConvet to fahrenheit to centigrade: %f", centigrade);
        // printf("%f",&fahrenheit);
        break;

    default:
        printf("\nyou enter the wrong value");
        break;
    }
}

//output 1 
/*Convert the fahrenheit degrees to convert in centigrade degress or vice versa : 
use option
1.centigrade to fahrenheit
2.fahrenheit to centigrade
--------------------------------------
6

you enter the wrong value */

//output 2 
/*
Convert the fahrenheit degrees to convert in centigrade degress or vice versa : 
use option
1.centigrade to fahrenheit
2.fahrenheit to centigrade
--------------------------------------
2
Enter the value: 6

Convet to fahrenheit to centigrade: -14.444445    */