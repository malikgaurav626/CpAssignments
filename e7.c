// 2. Write a program to calculate x^y (Using Recursion).
#include <stdio.h>

int powercalculator(int, int);
int main()
{
    int number, power;
    printf("Find x raised to power y \nType x and y : ");
    scanf("%d %d", &number, &power);
    printf("%d^%d is : %d", number, power, powercalculator(number, power));
}

int powercalculator(int x, int y)
{
    int dummy = 1;
    if (y > 0)
    {
        dummy = x * powercalculator(x, y - 1);
    }
    return dummy;
}

