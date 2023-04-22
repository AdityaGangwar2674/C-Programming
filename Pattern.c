#include <stdio.h>

int main()
{
    int n;
    printf("Enter The height :");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        for (int j = i - 1; j > 0; j--)
        {
            printf(" ");
        }
        for (int m = 0; m < n - i; m++)
        {
            printf("%d", m + 1);
        }
        printf("%d", n - i + 1);
        for (int o = 0; o < n - i; o++)
        {
            printf("%d", n - i - o);
        }
        printf("\n");
    }
    return 0;
}