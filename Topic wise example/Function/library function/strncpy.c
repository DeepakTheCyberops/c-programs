/*the length of the string(n1,n2) becomes strlen(n1)+n2*/
#include <stdio.h>
#include <string.h>
int main()
{

    /*Take any two strings*/
    char s1[20] = "hello world";
    char s2[10];

    /* Print string before function use*/
    printf("%s\n", s1);

    /*use this sumction to copy n value of s1 to s2*/
    strncpy(s2, s1, 8);

    /* Prints the string */
    printf("%s\n", s2);
    return 0;
}

// ouput
/*hello world
hello wo
*/