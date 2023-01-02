// input
#include <stdio.h>
#include <math.h> // Used for constant PI referred as M_PI
float diameter_of_circle(float);
float cir_of_circle(float);
float ar(float);
int main()
{
    float radius, diameter, circumference, area;
    printf("enter the radius: ");
    scanf("%f", &radius);
    diameter = diameter_of_circle(radius);
    printf("\nthe diameter: %f", diameter);
    circumference = cir_of_circle(radius);
    printf("\nthe circumference: %f", circumference);
    area = ar(radius);
    printf("\nthe area: %f", area);
}

/*function declare for diameter of circle*/
float diameter_of_circle(float radius)
{
    return (2 * radius);
}

/*function declare for circumference of circle*/
float cir_of_circle(float radius)
{
    return (2 * M_PI * radius);
}

/*function declare for area of circle*/
float ar(float radius)
{
    return (M_PI * radius * radius);
}

// output
/*
enter the radius: 5

the diameter: 10.000000
the circumference: 31.415926
the area: 78.539818
*/