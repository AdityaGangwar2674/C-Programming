#include <stdio.h>

void multiply(int a1[10][10], int a2[10][10], int result[10][10], int a, int b, int m, int n)
{

    if (b != m)
    {
        printf("Error: cannot multiply matrices.\n");
        return;
    }

    // perform matrix multiplication
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int k = 0; k < b; k++)
            {
                sum += a1[i][k] * a2[k][j];
            }
            result[i][j] = sum;
        }
    }
}

void print_matrix(int matrix[10][10], int p, int q)
{
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a1[10][10], a2[10][10], result[10][10];
    int a, b, m, n;

    printf("Enter the number of rows and columns of matrix A: \n");
    scanf("%d %d", &a, &b);

    printf("Enter the elements of matrix A: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &a1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of matrix B: \n");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of matrix B: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a2[i][j]);
        }
    }

    multiply(a1, a2, result, a, b, m, n);

    printf("Resultant matrix after multiplication:\n");
    print_matrix(result, a, n);

    return 0;
}
