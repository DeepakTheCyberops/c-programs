// input
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    char ch;
    printf("enter the char: ");
    ch = getchar();
    fptr = fopen("5.fput.txt", "w");
    if (fptr == NULL)
    {
        printf("file did not exist: ");
        exit(0);
    }
    fputc(ch, fptr);
    fclose(fptr);
}

/*output
M*/