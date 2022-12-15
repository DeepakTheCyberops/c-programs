//Any year is enterd through the keybord. Write a function to determine whether the year is a leap or not.
/*
#include<stdio.h>
int main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year % 400 == 0 && year % 100 == 0 || year % 4 == 0)
	{
	printf("leap year");
	}
	else{
	printf("not a leap year");
	}
	return 0;
}
*/

#include<stdio.h>  
#include<stdbool.h>  
  
bool leap(int); // function prototype  
  
int main()  
{  
    int year;  
  
    printf("Enter a year to find leap year or not\n");  
    scanf("%d", &year);  
  
    //function call leap(year);  
    if( leap(year) )  
    {  
        printf("%d is leap year\n", year);  
    }  
    else  
    {  
        printf("%d is not leap year\n", year);  
    }  
  
    return 0;  
}  
  
//function definition  
bool leap(int year)  
{  
    if(year % 100 == 0)  
    {  
        if(year % 400 == 0)  
            return true;  
        else  
            return false;  
    }  
    else  
    {  
        if(year % 4 == 0)  
            return true;  
        else  
            return false;  
    }  
}  
