#include <stdio.h>

int main()
{
    int a[10][10], i, j, k, m, n, p;
    printf("enter the number of rows and columns : ");
    scanf("%d %d", &m, &n);

    printf("enter the elements of matrix : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("elements of matrix : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = (j + 1); k < n; k++)
            {
                if (a[i][j] > a[i][k])
                {
                    p = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = p;
                }
            }
        }
    }

    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            for (k = (i + 1); k < m; k++)
            {
                if (a[i][j] < a[k][j])
                {
                    p = a[i][j];
                    a[i][j] = a[k][j];
                    a[k][j] = p;
                }
            }
        }
    }

    printf("The Sorted Matrix is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}