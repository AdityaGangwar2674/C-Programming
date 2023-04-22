#include <stdio.h>

int main()
{
    int a[10][10], transpose[10][10], i, j, m, n;
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
            transpose[j][i] = a[i][j];
        }
    }

    printf("transpose of matrix : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf(" %d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}