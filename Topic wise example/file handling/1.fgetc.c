// wap in c to read a singal char from a data file and write that chr on a output screen
//  input
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fpt; /*file pointer to contain the addres of a data fiel*/
    char ch;
    fpt = fopen("string.txt", "r"); /*to open the data file*/
    if (fpt == NULL)                /*check whether it is open or not*/
    {
        printf("file did not exist");
        exit(0);
    }

    ch = fgetc(fpt); /*ch store the the first char of a fiel*/
    printf("the first leter is: %c", ch);
    fclose(fpt); /*close the file*/
}

/*output
the first leter is: h */