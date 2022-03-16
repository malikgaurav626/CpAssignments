// Write a program to solve TOH(Tower Of Hanoi)
#include <stdio.h>
void Tower(int, char, char, char);
int main()
{
    int discnumber;
    printf("Type the number of discs in the tower : ");
    scanf("%d", &discnumber);
    Tower(discnumber, 'A', 'C', 'B');
}
void Tower(int n, char x, char y, char z)
{
    if (n == 1)
    {
        printf("\nMove disc : 1 from Tower %c to Tower %c", x, y);
        return;
    }
    Tower(n - 1, x, z, y);
    printf("\nMove disc : %d from Tower %c to Tower %c", n, x, y);
    Tower(n - 1, z, y, x);
}

