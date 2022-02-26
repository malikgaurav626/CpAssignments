// Write a program to find sum of n natural number using for loop.
#include <stdio.h>
#include <conio.h>

int main()
{
    int a, i;
    printf("sum of first n numbers,\ntype n : ");
    scanf("%d", &a);
    int b;
    b = 0;
    for (i = 0; i <= a; i++)
    {
        b += i;
    }
    printf("the sum of first %d natural numbers is : %d", a, b);
    return 0;
}