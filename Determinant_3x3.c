#include <stdio.h>

int main()
{
    int a[3][3], i, j, m, n, det;
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

    det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]) - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]) + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);

    printf("determinant of the matrix is = %d\n", det);
    return 0;
}