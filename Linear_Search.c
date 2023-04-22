#include <stdio.h>

int main()
{
    int n;

    printf("input the size of array :");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i <= n - 1; i++)
    {
        printf("input the element of %d position :", i);
        scanf("%d", &arr[i]);
    }

    printf("input the number to be searched : ");
    int a;
    scanf("%d", &a);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            printf("number found \n the number is %d and index is %d", a, i);
            break;
        }
    }
    return 0;
}