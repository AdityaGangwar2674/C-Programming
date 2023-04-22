#include <stdio.h>

#define MAX_SIZE 10

float determinant(float matrix[MAX_SIZE][MAX_SIZE], int n);

int main()
{
    float matrix[MAX_SIZE][MAX_SIZE];
    int i, j, n;

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }

    printf("Determinant = %f", determinant(matrix, n));

    return 0;
}

float determinant(float matrix[MAX_SIZE][MAX_SIZE], int n)
{
    int i, j, k;
    float det = 0;
    float submatrix[MAX_SIZE][MAX_SIZE];

    if (n == 1)
    {
        return matrix[0][0];
    }
    else if (n == 2)
    {
        return (matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]);
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            int subi = 0;
            for (j = 1; j < n; j++)
            {
                int subj = 0;
                for (k = 0; k < n; k++)
                {
                    if (k == i)
                    {
                        continue;
                    }
                    submatrix[subi][subj] = matrix[j][k];
                    subj++;
                }
                subi++;
            }
            det += (i % 2 == 1 ? -1.0 : 1.0) * matrix[0][i] * determinant(submatrix, n - 1);
        }
    }
    return det;
}
