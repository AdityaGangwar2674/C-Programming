#include <stdio.h>

int is_prime(int num)
{
    if (num <= 1)
    {
        return 0; // neither prime nor composite
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0; // composite
        }
    }

    return 1; // prime
}

void find_primes(int start, int end)
{
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int start, end;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    find_primes(start, end);

    return 0;
}
