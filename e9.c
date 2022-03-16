// Write a program for sorting an array using Bubble sorting.
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
        for (int j = 0; j < n; j++)
        {

            for (int i = 1; i < n; i++)
            {
                int x = arr[i - 1];
                if (x >= arr[i])
                {
                    arr[i - 1] = arr[i];
                    arr[i] = x;
                }
            }
        }
        printf("Sorted Array Using Bubble Sorting : ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}
