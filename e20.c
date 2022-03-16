#include <stdio.h>

int main()
{
    char str[100000] = {'\0'};
    printf("Enter string : ");
    gets(str);
    int len = 0, i = 0;
    while (str[i] != '\0')
    {
        len++;
        i++;
    }
    printf("Length of the string is : %d", len);
}