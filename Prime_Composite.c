#include <stdio.h>

int main()
{
    printf("input the number you want to start with :\n");
    int a;
    scanf("%d", &a);

    if (a == 1)
    {
        printf("please enter a number other than 1 :");
        scanf("%d", &a);
    }

    printf("input the number you want to end with :\n");
    int b;
    scanf("%d", &b);
    int sum;
    for (int i = a; i <= b; i++)
    {
        sum = 0;
        for (int j = 2; j <= i; j++)
        {

            if (i % j == 0)
            {
                sum += 1;
            }
        }
        if (sum == 1)
        {
            printf("%d is the prime number\n", i);
        }

        else
        {
            printf("%d is the composite number\n", i);
        }
    }
    return 0;
}