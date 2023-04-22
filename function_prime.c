#include <stdio.h>
int prime(int a);
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);

    if (prime(n))
    {
        printf("%d is a prime number \n", n);
    }
    else
    {
        printf("%d is a composite number \n", n);
    }
    return 0;
}
int prime(int a)
{
    if (a <= 1)
    {
        return 0;
    }

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }

    return 1;
}