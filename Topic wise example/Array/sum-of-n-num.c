// input
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a[20], sum=0, i, n;
    printf("enter how many number you want to print: "); // enter the 40 bit vlue
    scanf("%d", &n);
    if (n > 20)
    {
        printf("you give greater number than 20\n");
        exit (0);
    }
    for (i = 0; i < n; i++) // take value from user
    {
        printf("enter the number ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) // sum of given array
    {
        sum = sum + a[i];
    }

    printf("the sum of array is: %d", sum); // print the sum of array
    //return 0;
}

//output
/*enter how many number you want to print: 5
enter the number 1
enter the number 2
enter the number 3
enter the number 4
enter the number 5
the sum of array is: 15
*/





// // input
// #include <stdio.h>
// int main()
// {
//     int a[20], sum, i, n;
//     printf("enter how many number you want to print: "); // enter the 40 bit vlue
//     scanf("%d", &n);
//     // check condition of array  is not greater the n it exicute -->if
//     if (n < 20)
//     {
//         for (i = 0; i <= n; i++)                //take value from user
//         {
//             printf("enter the number ");
//             scanf("%d", &a[i]);
//         }

//         for (i = 0; i <= n; i++)                //sum of given array
//         {
//             scanf("%d", &a[i]);
//             sum = sum + a[i];
//         }

//         printf("the sum of array is: %d", sum); //print the sum of array
//     }

//     // if value is greater than it
//     else
//     {
//         printf("you give greater number than 20\n");
//     }

//     return 0;
// }
