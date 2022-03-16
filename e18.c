#include <stdio.h>
#include <string.h>
int main()
{
    char str1[1000], str2[1000], strfin[2000];
    printf("Enter First String : ");
    gets(str1);
    printf("Enter Second String : ");
    gets(str2);
    int k = 0, len1 = strlen(str1), len2 = strlen(str2), j = len1;
    for (int i = 0; i < len1 + len2; i++)
    {
        if (i < len1)
        {
            strfin[i] = str1[i];
        }
        else
        {
            strfin[j] = str2[k];
            j++;
            k++;
        }
    }
    printf("Final Sting After concatentation : ");
    for (int i = 0; i < len1 + len2; i++)
    {
        printf("%c", strfin[i]);
    }
}