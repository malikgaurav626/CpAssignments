#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char str1[1000], str2[1000], strfin[2000];
    printf("Enter First String : ");
    gets(str1);
    printf("Enter Upto what length you need to copy the entered string : \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        str2[i] = str1[i];
    }
    printf("String copied : ");
    for (int i = 0; i < n; i++)
    {
        printf("%c", str2[i]);
    }
}