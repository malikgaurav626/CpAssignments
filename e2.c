// Write a program to find a number is divided by 2,7,11 or not using switch case.
#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, d;
    int each;
    printf("type the number : ");
    scanf("%d", &a);
    d = 11;
    each = 2;
    switch (each)
    {
    case 2:
        b = a % 2;
        if (b == 0)
        {
            printf("divisible by 2\n");
        }
        else
        {
            printf("not divisible by 2\n");
        }

    case 7:

        b = a % 7;
        if (b == 0)
        {
            printf("divisible by 7\n");
        }
        else
        {
            printf("not divisible by 7\n");
        }
    case 11:

        b = a % 11;
        if (b == 0)
        {
            printf("divisible by 11");
        }
        else
        {
            printf("not divisible by 11\n");
        }
        break;
    }
}