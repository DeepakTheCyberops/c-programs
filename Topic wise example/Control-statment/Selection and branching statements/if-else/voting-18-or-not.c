//voiting eligibility
#include <stdio.h>

int main() {
    int num;
    printf("enter the variable to check it \n");
    scanf("%d",&num);
    
    if(num>18)
    {
        printf("you was eligibiliy");
    }
    else
    {
        printf("you was not eligibiliy");
    }
    return 0;
}

//output
/*enter the variable to check it 
89
you was eligibiliy               
*/