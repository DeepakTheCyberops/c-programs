// lower alphabetrs a to z
// input
#include <stdio.h>
int main()
{
    // char ch;
    char i = 97;
    printf("lowercase alphabets from a to z\n");
    /*use do while to print loercase alphabets*/
    do
    {
        printf("%c", i);
        i++;
    } while (i <= 122);
}

//output
/*lowercase alphabets from a to z
abcdefghijklmnopqrstuvwxyz   */