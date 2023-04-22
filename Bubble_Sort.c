#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of elements in the array:\t");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d no. element : ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n - 1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                int c = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = c;
            }
        }
    }
    printf("sorted array is : ");
    for (int l = 0; l < n; l++)
    {
        printf("%d ", arr[l]);
    }

    return 0;
}