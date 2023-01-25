#include <stdio.h>
#include <string.h>
struct student
{
    char firstName[50];
    int roll;
    float marks;
} s[50];

int main()
{
    int i, n;
    printf("Enter how many number student data you want to print ");
    scanf("%d", &n);

    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < n; ++i)
    {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < n; ++i)
    {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
/*output
Enter how many number student data you want to print 5
Enter information of students:

For roll number1,
Enter first name: ram
Enter marks: 254

For roll number2,
Enter first name: sham
Enter marks: 256

For roll number3,
Enter first name: komal
Enter marks: 258

For roll number4,
Enter first name: raja
Enter marks: 199

For roll number5,
Enter first name: roki
Enter marks: 300
Displaying Information:


Roll number: 1
First name: ram
Marks: 254.0

Roll number: 2
First name: sham
Marks: 256.0

Roll number: 3
First name: komal
Marks: 258.0

Roll number: 4
First name: raja
Marks: 199.0

Roll number: 5
First name: roki
Marks: 300.0
*/