#include <stdio.h>

int main()
{
    int n;
    int m;
    printf("enter a number : \n");
    scanf("%d", &n);
    int sum = 0;

    while (n != 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    printf("the sum of digits is %d \n", sum);
    return 0;
}