#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000], str1[10000], n;
    printf("Enter the String : ");
    gets(str);
    n = strlen(str);
    printf("After changing the uppercase to lowercase and vice verse : \n");
    for (int i = 0; i < n; i++)
    {
        int x;
        x = str[i];
        if (x > 90)
        {
            x -= 32;
        }
        else
        {
            x += 32;
        }
        printf("%c", x);
    }
}