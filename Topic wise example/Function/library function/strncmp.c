#include <stdio.h>
#include <string.h>

int main()
{
    /*Take any two strings*/
    char leftStr[] = "i love you";
    char rightStr[] = "i love you";

    // Using strcmp()
    int res = strncmp(leftStr, rightStr, 5);

    /*use if else to tell it is equal or not*/
    if (res == 0)
        printf("Strings are equal");
    else
        printf("Strings are unequal");
}