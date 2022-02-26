// Write a program to calculate Nth term of Fibonacci Series.
#include <conio.h>
#include <stdio.h>

int main()
{
    int a, b, c, d;
    int i;
    printf("nth term of the fibonacci Series, \nType n : ");
    scanf("%d", &a);
    i = 1;
    b = 0;
    d = 1;
    c = 0;
    while (i < (a - 1))
    {
        b = c + d;
        c = d;
        d = b;
        i++;
    }
    if (a == 1)
    {
        printf("The %dst term of Fibonacci Series is : %d", a, 0);
    }
    else if (a == 2)
    {
        printf("The %dnd term of Fibonacci Series is : %d", a, 1);
    }
    else
    {
        printf("The %dth term of Fibonacci Series is : %d", a, b);
    }
}