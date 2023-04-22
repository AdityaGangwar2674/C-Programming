#include <stdio.h>

int lcm(int a, int b, int i)
{
    if ((a * i) % b == 0)
    {
        return a * i;
    }
    lcm(a, b, i + 1);
}

int hcf(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    hcf(b % a, a);
}

int main()
{
    int a, b, high, low;
    ;

    printf("Enter the Numbers to be found : ");
    scanf("%d %d", &a, &b);

    a > b ? ({low = b; high = a; }) : ({low = a; high = b; });

    printf("HCF of the Number Is %d\n", hcf(low, high));
    printf("LCM of the Number Is %d\n", lcm(high, low, 1));
}