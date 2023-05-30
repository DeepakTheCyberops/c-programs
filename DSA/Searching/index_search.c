// input
#include <stdio.h>
int i;

void index_search(int arr[], int size, int find, int gs)
{
    for (i = 0; i < size; i = i + gs)
    {
        if (find <= arr[i])
        {
            break;
        }
    }

    int p = i - gs, f;

    for (i = p; i < p + gs; i++)
    {
        if (find == arr[i])
        {
            f = i;
            break;
        }
    }

    if (f = i)
    {
        printf("its found on %d place", f);
    }
    else
    {
        printf("element is not found");
    }
}

int main()
{
    int n, key, gs, f;

    printf("enter the size of a array ");
    scanf("%d", &n);

    int a[n];

    printf("enter the shorted array");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("enter element to find ");
    scanf("%d", &key);

    printf("enter group size ");
    scanf("%d", &gs);
    index_search(a, n, key, gs);
}