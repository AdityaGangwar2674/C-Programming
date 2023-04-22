// Q.3 The major difference between simple interest (SI) and compound interest (CI) is that simple interest
// is based on the principal amount. In contrast, compound interest is based on the principal amount
// and the interest compounded for a cycle of the period.
// Write a C program to compute the SI and CI considering the valid inputs and formulae.

#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    float p, r, c, s, a, n;

    // Entry for the data
    printf("Enter Principal amount :");
    scanf("%f", &p);
    printf("Enter The Rate Of Interest :");
    scanf("%f", &r);
    printf("Enter Time Period :");
    scanf("%d", &t);

    // Simple interest

    s = p * r * t / 100;

    printf("The Simple Interest For The Amount is :%f \n", s);
    printf("The Total Amount is :%f \n", s + p);

    // compound interest

    c = p * (1 + r / 100);
    a = pow(c, t);

    printf("The compound Interest For The Amount is :%f \n", a - p);
    printf("The Total Amount is :%f \n", a);

    return 0;
}