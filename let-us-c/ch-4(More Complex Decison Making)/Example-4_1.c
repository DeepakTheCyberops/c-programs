/*Example 4.1: The marks obtained by a student in 5 different subjects are input through the keyboard. The student gets a division as per the following rules:
Percentage above or equal to 60 - First division
Percentage between 50 and 59 - Second division
Percentage between 40 and 49 - Third division
Percentage less than 40 - Fail
Write a program to calculate the division obtained by the student.
There are two ways in which we can write a program for this example. These methods are given below.
*/

#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, per;
    printf("Enter marks in five subjects\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    per = (m1 + m2 + m3 + m4 + m5) * 100 / 500;
    if (per >= 60)
        printf("First division\n");
    else
    {
        if (per >= 50)
            printf("Second division\n");
        else
        {
            if (per >= 40)
                printf("Third division\n");
            else
                printf("Fail\n");
        }
    }
    return 0;
}

//output
/*Enter marks in five subjects
70  
70
70
70
70
First division
*/