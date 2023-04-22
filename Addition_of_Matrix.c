#include <stdio.h>

int main()
{
    int n, m;
    printf("enter the numbers of rows and columns : ");
    scanf("%d %d", &m, &n);
    int ar[m][n];

    printf("enter the elements of first matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    int a, b;
    printf("enter the numbers of rows and columns : ");
    scanf("%d %d", &a, &b);
    int arr[a][b];
    int sum;
    printf("enter the elements of second matrix : \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    if (m == a && n == b)
    {
        printf("the resultant matrix after the summation is \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                sum = 0;
                sum = ar[i][j] + arr[i][j];
                printf("%d\t", sum);
            }
            printf("\n");
        }
    }
    else
    {
        printf("the sum can not be computed");
    }

    return 0;
}