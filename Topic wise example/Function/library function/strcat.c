// input
#include <stdio.h>
#include <string.h>
int main()
{
    /*Take any two strings*/
    char str1[10] = "hello";
    char str2[10] = "world";

    /* Print string before function use*/
    printf("%s\n", str1);
    printf("%s\n", str2);

    /*Appends character from str1 to str2 and Print the string*/
    printf("%s\n", strcat(str1, str2));
}

// output
/*hello
world
helloworld
*/