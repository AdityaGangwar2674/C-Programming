#include <stdio.h>

int main()
{
    int m, n, matrix[10][10], i, j, even_count = 0, odd_count = 0;

    printf("Enter the number of rows in the matrix : ");
    scanf("%d", &m);

    printf("Enter the number of columns in the matrix : ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] % 2 == 0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }
    }

    printf("The matrix you entered is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Number of even elements in the matrix: %d\n", even_count);
    printf("Number of odd elements in the matrix: %d\n", odd_count);

    printf("Even elements in the matrix: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matrix[i][j] % 2 == 0)
            {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");

    printf("Odd elements in the matrix: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matrix[i][j] % 2 != 0)
            {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}
