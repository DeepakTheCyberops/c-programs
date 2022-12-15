/*Problem 4.2
If a character is entered through the keyboard, write a program to determine whether the character is a capital letter, a small case letter, a digit or a special symbol.
The following table shows the range of ASCII values for various characters:
*/

// input
#include <stdio.h>
int main()
{
    char ch;
    printf("\nEnter a character from the keyboard: \n");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
        printf("The character is an uppercase letter\n");
    if (ch >= 97 && ch <= 122)
        printf("The character is a lowercase letter\n");
    if (ch >= 48 && ch <= 57)
        printf("The character is a digit\n");
    if ((ch >= 0 && ch < 48) || (ch > 57 && ch < 65) || (ch > 90 && ch < 97) || ch > 122)
        printf("The character is a special symbol\n");
    return 0;
}

//output
/*
Enter a character from the keyboard:
D
The character is an uppercase letter
*/