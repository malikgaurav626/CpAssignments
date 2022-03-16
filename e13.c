// Write a program to calculate Mean and Standard Deviation of elements of an array.
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Type the number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];
    float mean = 0, n1 = n;
    printf("Type the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        mean += arr[i];
    }
    mean = mean / n1;
    float arr1[n];
    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr[i] - mean;
        arr1[i] = arr1[i] * arr1[i];
    }
    int mean2 = 0;
    for (int i = 0; i < n; i++)
    {
        mean2 += arr1[i];
    }
    mean2 = mean2 / n1;
    double standarddeviation;
    standarddeviation = pow(mean2, 0.5);
    printf("The mean of the given array is : %f\n", mean);
    printf("The Standard deviation of the given array is : %lf", standarddeviation);
}
