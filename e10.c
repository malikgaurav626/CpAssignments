//write a program to sort array using insertion sorting
#include <stdio.h>
void insertionSort(int arr[], int n)
{
    int i, lr, j;
    for (i = 1; i < n; i++)
    {
        lr = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > lr)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = lr;
    }
}
int main()
{
    int n;
    printf("Type the number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Type the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, n);
    printf("Sorted array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}


