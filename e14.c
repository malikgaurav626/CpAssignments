#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10000], str2[10000];
    printf("Enter string 1 : ");
    scanf("%s", str1);
    printf("Enter string 2 : ");
    scanf("%s", str2);
    int len1, len2, trigger = 0;
    len1 = strlen(str1);
    len2 = strlen(str2);
    if (len1 == len2)
    {
        for (int i = 0; i < len1; i++)
        {
            if (str1[i] != str2[i])
            {
                trigger = 1;
                break;
            }
        }
        if (trigger == 1)
            printf("Not Equal\n");
        else
            printf("Equal\n");
    }
    else
        printf("Not Equal\n");
}