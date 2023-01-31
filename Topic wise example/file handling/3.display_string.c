// wap in c to read string from a data fiel and then display that string on the output screen
// Note -> string only read a singal line it cannot take after the valu of enter
// input
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr; /*addres of data file */
    int n;
    char str[50];
    printf("the size of string you want: ");
    scanf("%d", &n);
    fptr = fopen("string.txt", "r"); /*open the data fiel*/
    if (fptr == NULL)                /*check fiel is exist or not*/
    {
        printf("file did not exist");
    }

    fgets(str, n, fptr); /*print the string */
    printf("the string is: %s", str);
    fclose(fptr);
}

/*output 
the size of string you want: 20
the string is: Hello: I am jamison */