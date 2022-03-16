// 1. Write programs using elements of an array to:
//  4. To find an specific element in the array.
#include <stdio.h>
int main()
{
    int n, tasknumber;
    printf("Type the number of element in the array : ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Warning : array length is either -ve or 0\n");
    }
    else
    {
        int arr[n];
        printf("Type all the elements of the array : ");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("Type the number you want to find : ");
        scanf("%d", &tasknumber);
        int position, flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (tasknumber == arr[i])
            {
                position = i;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("%d does not exist in array.", tasknumber);
        }
        else
        {
            printf("%d lies at position: %d in the array.", tasknumber, position + 1);
        }
    }
}

