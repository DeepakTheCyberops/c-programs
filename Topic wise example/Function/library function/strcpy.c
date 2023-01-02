// input
#include <stdio.h>
#include <string.h>
int main()
{
    /*Take any two strings*/
    char str1[10] = "love you";
    char str2[10];

    /* Print string before function use*/
    printf("%s\n", str1);

    /*copy character from str1 to str2 and Print the string*/
    printf("%s\n", strcpy(str2, str1));
}

// output
/*
love you
love you
*/