#include <stdio.h>

int main()
{
    int n, m;
    printf("enter the number of rows and columns : ");
    scanf("%d %d", &m, &n);
    int ar[n][m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter the elements of first matrix");
            scanf("%d", &ar[i][j]);
        }
    }

    int a, b;
    int prod = 0;
    printf("enter the numbers of rows and columns : ");
    scanf("%d %d", &a, &b);
    int arr[a][b];
    int result[m][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("enter the elements of second matrix");
            scanf("%d", &arr[i][j]);
        }
    }

    if (n == a)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    prod += ar[i][j] * arr[i][j];
                }
                result[i][j] = prod;
                prod = 0;
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("multiplication is not possible");
    }
    return 0;
}