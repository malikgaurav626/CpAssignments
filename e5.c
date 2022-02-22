
// Name: Gaurav    |    Assignment: 1   |   Roll No.: 12111073

// Write a program to calculate the Factorial of a number

#include <stdio.h>
#include <conio.h>

int main()
{
    double a, b, c, d, i;
    printf("Type the number whose factorial you wanna find out : ");
    scanf("%lf", &a);
    b = 1;
    for (i = a; i > 0; i--)
    {
        b = b * i;
    }
    printf("The factorial of %lf is %lf", a, b);
}