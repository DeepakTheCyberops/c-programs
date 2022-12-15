/*Problem 5.1
Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 120.00 per hour for every hour worked above 40 hours. Assume that employees do not work for fractional part of an hour.
Program
*/
#include <stdio.h>
int main()
{
    float otpay;
    int hour, i = 1;
    while (i <= 10) // Loop for 10 employees
    {
        printf("\nEnter no. of hours worked: ");
        scanf("%d", &hour);
        if (hour >= 40)
            otpay = (hour - 40) * 120;
        else
            otpay = 0;
        printf("Hours = %d Overtime pay Rs.%f\n", hour, otpay);
        i++;
    }
    return 0;
}

//output
/*
Enter no. of hours worked: 50                   
Hours = 50 Overtime pay Rs.1200.000000

Enter no. of hours worked: 64
Hours = 64 Overtime pay Rs.2880.000000

Enter no. of hours worked: 40
Hours = 40 Overtime pay Rs.0.000000

Enter no. of hours worked: 80
Hours = 80 Overtime pay Rs.4800.000000

Enter no. of hours worked: 60 
Hours = 60 Overtime pay Rs.2400.000000

Enter no. of hours worked: 90
Hours = 90 Overtime pay Rs.6000.000000

Enter no. of hours worked: 5
Hours = 5 Overtime pay Rs.0.000000

Enter no. of hours worked: 80
Hours = 80 Overtime pay Rs.4800.000000

Enter no. of hours worked: 64
Hours = 64 Overtime pay Rs.2880.000000

Enter no. of hours worked: 145
Hours = 145 Overtime pay Rs.12600.000000
*/