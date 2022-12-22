// wap in c to print alphabets from A to Z.
// input
#include <stdio.h>

int main()
{
    char ch = 'A';
    printf("Alphabets from a - z are: \n");
    while (ch <= 'Z')
    {
        printf("%c\n", ch);
        ch++;
    }

    return 0;
}

//output
/*
Alphabets from a - z are: 
A
B
C
D
E
F
G
H
I
J
K
L
M
N
O
P
Q
R
S
T
U
V
W
X
Y
Z
*/
