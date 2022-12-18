/*Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees.
 */
// input
#include <stdio.h>
int main()
{
    float fahrenheit,centigrade;
    printf("enter the fahrenheit degrees to convert in centigrade degress: ");
    scanf("%f",&fahrenheit);
    centigrade = (fahrenheit - 32) * 5/9;
    printf("convet to fahrenheit %f", centigrade);

}


//output
/*
enter the fahrenheit degrees to convert in centigrade degress: 5
convet to fahrenheit -15.000000   
*/
