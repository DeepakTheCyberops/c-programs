// input
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    int roll_no, age;
    char name[20], add[150];
    fptr = fopen("4.student-info.txt", "r");
    if (fptr == NULL)
    {
        printf("file did not exitst");
        exit(0);
    }
    fscanf(fptr, "%*s %d", &roll_no);
    fscanf(fptr, "%*s %s", name);
    fscanf(fptr, "%*s %d", &age);
    fscanf(fptr, "%*s %s", add);

    printf("supose all data is: \n");
    printf("roll no:%d\n", roll_no);
    printf("name: %s\n", name);
    printf("number: %d\n", age);
    printf("address: %s\n", add);

    fclose(fptr);
}

/*supose all data is: 
roll no:4
name: jamison
number: 21
address: meerut,up*/