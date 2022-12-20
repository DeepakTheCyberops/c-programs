/*Write a program to print the grade of the student when the marks of 5 subject are given. The method of assigning grade is as following:
Percentage >= 85                    Grade: A+
Percentage < 85 and >= 70           Grade: A
Percentage < 70 and >= 60           Grade: B+
Percentage < 60 and >= 50           Grade: B
Percentage < 50 and >= 40           Grade: C
Percentage < 40                     Grade: F */

// input
#include <stdio.h>
int main()
{
    int option;
    float sum, s1, s2, s3, s4, s5, avg;
    printf("enter the first subject number: ");
    scanf("%f",&s1);
    printf("enter the second subject number: ");
    scanf("%f",&s2);
    printf("enter the third subject number: ");
    scanf("%f",&s3);
    printf("enter the fourth subject number: ");
    scanf("%f",&s4);
    printf("enter the fifth subject number: ");
    scanf("%f",&s5);
    printf("the sum five subject is: ");
    sum = s1+s2+s3+s4+s5;
    printf("\n%f",sum);
    avg = sum / 5;
    printf("\nthe percentage is: %.2f",avg);
    printf("\n-------------------------------------------------");
    printf("\nselect the option on the basis of your marks:");
    printf("\n1.Percentage >= 85                    Grade: A+");
    printf("\n2.Percentage < 85 and >= 70           Grade: A");
    printf("\n3.Percentage < 70 and >= 60           Grade: B+");
    printf("\n4.Percentage < 60 and >= 50           Grade: B");
    printf("\n5.Percentage < 50 and >= 40           Grade: C");
    printf("\n6.Percentage < 40                     Grade: F");
    printf("\n-------------------------------------------------");
    printf("\nenter your choice: ");
    scanf("%d",&option);

    switch (option)
    {
    case 1:
        printf("Your grade A+");
        break;
    
    case 2:
        printf("Your grade A");
        break;
    
    case 3:
        printf("Your grade B+");
        break;
    
    case 4:
        printf("Your grade B");
        break;

    case 5:
        printf("Your grade C");
        break;

    default:
        printf("Your grade F");
        break;
    }
}