// input
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL;
    head = malloc(sizeof(struct node));

    head->data = 45;
    head->link = NULL;

    printf("Data represt noad is  %d\n", head->data);
}

/*output
Data represt noad is  45
*/