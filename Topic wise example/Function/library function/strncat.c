/*the length of the string(n1,n2) becomes strlen(n1)+n2*/
#include <stdio.h>
#include <string.h>
int main()
{

    /*Take any two strings*/
    char s1[10] = "hello";
    char s2[10] = "world";

    /* Print string before function use*/
    printf("Source string : %s\n", s1);
    printf("Destination string : %s\n", s2);

    /* Appends 2 character from s1 to s2*/
    strncat(s1, s2, 2);

    /* Prints the string */
    printf("after use function strncat : %s\n", s1);
    return 0;
}

// ouput
/*
Source string : hello
Destination string : world
after use function strncat : hellowo
*/