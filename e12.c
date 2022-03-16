// write a program to find the sum of each row and column of a matrix separately
#include <stdio.h>

int main()
{
    int m, n;
    printf("Type the number of rows in the matrix : ");
    scanf("%d", &m);
    printf("Type the number of column in the matrix : ");
    scanf("%d", &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter row %d element %d : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        int rowsum = 0;
        for (int j = 0; j < n; j++)
        {
            rowsum += arr[i][j];
        }
        printf("Sum of row %d is : %d\n", i + 1, rowsum);
    }
    for (int j = 0; j < n; j++)
    {
        int columnsum = 0;
        for (int i = 0; i < m; i++)
        {
            columnsum += arr[i][j];
        }
        printf("Sum of column %d is : %d\n", j + 1, columnsum);
    }
}

