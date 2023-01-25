// input
#include <stdio.h>
#include <string.h>
struct person
{
    char name[15];
    int cityno;
    float salery;
}

main()
{
    struct person ram, sham, kumar;
    // struct person one;
    strcpy(ram.name, "ronak singh");
    ram.cityno = 19200;
    ram.salery = 34000;
    printf("name %s\n", ram.name);
    printf("cityno %d\n", ram.cityno);
    printf("salery %f\n\n", ram.salery);

    strcpy(sham.name, "naha singh");
    sham.cityno = 1920;
    sham.salery = 3400;
    printf("name %s\n", sham.name);
    printf("cityno %d\n", sham.cityno);
    printf("salery %f\n\n", sham.salery);

    strcpy(kumar.name, "jacky");
    kumar.cityno = 192;
    kumar.salery = 340;
    printf("name %s\n", kumar.name);
    printf("cityno %d\n", kumar.cityno);
    printf("salery %f\n\n", kumar.salery);
}
/*output
name ronak singh
cityno 19200
salery 34000.000000

name naha singh
cityno 1920
salery 3400.000000

name jacky
cityno 192
salery 340.000000
*/