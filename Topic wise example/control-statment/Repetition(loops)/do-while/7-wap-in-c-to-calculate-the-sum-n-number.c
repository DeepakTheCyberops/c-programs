#include <stdio.h>

int main() {
    int sum = 0, no, i = 1;
    float avg;

    printf("\nEnter the value of N : ");
    // input N
    scanf("%d", &no);

    do {
        // loop body
        sum += i;

        // update expression
        i++;
    } while (i <= no);

    printf("\nSum : %d", sum);

    // Average of first N numbers 
    // typecasting sum from int to float data type
    avg = (float)sum / no;

    // %0.2f will print avg with a precision of 2 decimal places
    //printf("\nAverage of %d numbers : %0.2f", no, avg);

    return 0;
}

//output
/*
Enter the value of N : 5

Sum : 15
*/
