//if ages of ram, shyam and ajay are input thought the keybord, write a program to determine the youngest of the three.
// input
#include <stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("enter the age of ram: \n");
    scanf("%d", &ram);
    printf("enter the age of shyam: \n");
    scanf("%d", &shyam);
    printf("enter the age of ajay: \n");
    scanf("%d", &ajay);
    if (ram < shyam)
    {
        if (ram < ajay)
        {
            printf("%d ram is younger ",ram);
        }
        else
        {
            printf("%d shyam is younger",shyam);
        }
    }
    else if (shyam < ajay)
    {
        if (shyam < ram)
        {
            printf("%d shyam is younger",shyam);
        }
           
    }
    else
    {
        printf("%d ajay is younger",ajay);
    }
}

//output
/*enter the age of ram: 
54
enter the age of shyam: 
16
enter the age of ajay: 
85
16 shyam is younger  */