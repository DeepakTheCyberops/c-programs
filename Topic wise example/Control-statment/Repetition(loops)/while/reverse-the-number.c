//input
#include <stdio.h>
int main()
{
    int remender,reverse= 0,num;

    printf("enter the number: ");
    scanf("%d",&num);
    /*reverse the number using while loop*/
    while (num!=0)
    {   
        remender = num % 10;
        reverse = reverse * 10 + remender;

        num = num / 10;
    }
    printf("reverse number is: %d",reverse);   
    //return 0;
} 



//output
/*enter the number: 123
reverse number is: 321 */