//input
#include <stdio.h>
int main()
{
    char c;
    printf("enter the value the to find it out it is alphabet or not\n");
    scanf("%c",&c);
    if (c>='a' && c<='z'||c>='A' && c<='z')
    {
        printf("it is a alphabet");
    }
    else
    {
        printf("it is not a alphabet");
    }
    
}   

//output 1
/*
enter the value the to find it out it is alphabet or not
5
it is not a alphabet
*/

//output 2
/*
enter the value the to find it out it is alphabet or not
h
it is a alphabet  
*/