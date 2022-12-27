// input
#include <stdio.h>
#include <math.h>
int main()
{   
    int option;
    float radius, rad, height, circumference, volume, py = 3.14;
    printf("\nSelect the option are: ");
    printf("\n1.Radius");
    printf("\n2.Circumference");
    printf("\n3.Volume");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("Enter the radius");
        scanf("%d", &radius);
        printf("Enter the height: ");
        scanf("%d", &height);
        //rad = sqrt(volume / (py * height));
        // radius = ;
        break;

    case 2:
        printf("Enter the height: ");
        scanf("%d", &height);
        printf("Enter the radius");
        scanf("%d", &radius);
        circumference = 2 * py * radius * height;
        printf("circumference of cylinder is: %d", circumference);
        break;

    case 3:
        printf("Enter the height: ");
        scanf("%d", &height);
        printf("Enter the radius: ");
        scanf("%d", &radius);
        volume = py * radius * radius * height;
        printf("volume of cylinder is: %d", volume);
        break;

    default:
        printf("you enter the wrong value");
        break;
    }
}