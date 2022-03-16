#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], revstr[100];
    printf("Enter the String : ");
    gets(str);
    int n, j = 0;
    n = strlen(str);
    for (int i = n - 1; i >= 0; i--)
    {
        revstr[j] = str[i];
        j++;
    }
    printf("Reversed String : ");
    for (int i = 0; i < n; i++)
    {
        printf("%c", revstr[i]);
    }
}