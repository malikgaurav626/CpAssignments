
// Name: Gaurav    |    Assignment: 1   |   Roll No.: 12111073

// Write a program to calculate GCD of two numbers
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, d, num1, num2;
    printf("type num1 and num2 with space in b/w : ");
    scanf("%d%d", &num1, &num2);
    b = 0;
    for (c = 2; c <= 10000000; c++)
    {
        a = num1 % c;
        d = num2 % c;
        if ((a == 0) && (d == 0))
        {
            b = c;
        }
    }
    printf("gcd of %d and %d is : %d", num1, num2, b);
    return 0;
}