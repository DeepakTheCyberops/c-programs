// input
#include <stdio.h>
#include <string.h>
struct person
{
    char name[15];
    long int cityno;
    double salery;
}

main()
{
    struct person user;
    // use struct for one person;

    printf("Enter the name: ");
    scanf("%s", user.name);

    printf("Enter the pincode: ");
    scanf("%ld", &user.cityno);

    printf("Enter the name of salery: ");
    scanf("%lf", &user.salery);

    printf("name %s\n", user.name);
    printf("cityno %ld\n", user.cityno);
    printf("salery %.2lf\n", user.salery);
}

/*output
Enter the name: jams
Enter the pincode: 215466
Enter the name of salery: 3216547
name jams
cityno 215466
salery 3216547.00
*/