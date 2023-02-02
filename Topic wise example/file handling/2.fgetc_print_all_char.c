/*wap to read char from a data file and write that chr on the display*/
// input
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr; /*store the add of file*/
    char ch;
    fptr = fopen("string.txt", "r"); /*open the data file*/
    if (fptr == NULL)                /*chek file is connector not */
    {
        printf("file did not exist");
        exit(0);
    }
    while ((ch = fgetc(fptr)) != EOF) /*print all file until eof(ndicates the end of input) come*/
    {
        printf("%c", ch);
    }
    fclose(fptr); /*close the data file*/
}

/*output
Hello: I am jamison jams
currently learn c and linux
hobby to watch entertainment videos */