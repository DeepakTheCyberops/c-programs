// the distance between two cities (in kilometeres) is input through the keybourd. write a program to convert and print this distance in meters, feet, inches and centimeters.
// input
#include <stdio.h>
int main()
{
    float km, m, cm, ft, inch;
    printf("\n enter the distance in kilometers:");
    scanf("%f", &km);
    m = km * 1000;
    cm = m * 100;
    inch = cm / 2.54;
    ft = inch / 12;
    printf("distance in meters = %f\n", m);
    printf("distance in centimeter = %f\n", cm);
    printf("distance in feet = %f\n", ft);
    printf("distance in inches = %f\n", inch);
    return 0;
}

// output
/*
enter the distance in kilometers:5
distance in meters = 5000.000000
distance in centimeter = 500000.000000
distance in feet = 16404.199219
distance in inches = 196850.390625
*/