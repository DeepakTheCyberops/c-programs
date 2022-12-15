// C program to print all alphabets using while loop
// input
#include <stdio.h>

int main()
{
    char ch = 'a';

    printf("Alphabets from a - z are: \n");
    while (ch <= 'z')
    {
        printf("%c\n", ch);
        ch++;
    }

    return 0;
}

// output
/*
Alphabets from a - z are:
a
b
c
d
e
f
g
h
i
j
k
l
m
n
o
p
q
r
s
t
u
v
w
x
y
z
*/