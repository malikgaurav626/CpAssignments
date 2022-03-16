// Write programs using elements of an array to:
// 1. Print position of smallest number in array.
#include <stdio.h>

int main()
{
    int n;
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
        int element = 0, postion = 1;
        for (int j = 0; j < n; j++)
        {
            element = arr[0];
            for (int i = 1; i < n; i++)
            {
                if (element >= arr[i])
                {
                    element = arr[i];
                    postion = i + 1;
                }
            }
        }

        printf("The smallest number in the array is %d,\n its position is : %d", element, postion);
    }
}

