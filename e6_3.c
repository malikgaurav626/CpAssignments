// 1. Write programs using elements of an array to:
//   3. Delete a given element.
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
        printf("Type the number you want to delete : ");
        scanf("%d", &tasknumber);
        int arr1[n - 1], k = 0, l = 0;
        for (int i = 0; i < n; i++)
        {
            if (tasknumber != arr[i])
            {
                arr1[k] = arr[l];
                k++;
            }
            l++;
        }
        printf("Original Array : ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\nModded Array : ");
        for (int i = 0; i < n - 1; i++)
        {
            printf("%d ", arr1[i]);
        }
    }
}

