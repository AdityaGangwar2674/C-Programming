// Q.1 Write the C program to find the sum of two numbers
#include <stdio.h>
int main()
{
    int a, b;
    float c, d;

    // (i) when the inputs are of integer types
    printf("Enter the integers to be added\n");
    scanf("%d %d", &a, &b);
    printf("The sum of integers is :%d\n", a + b);

    // (ii) when the inputs are of floating point numbers
    printf("Enter the floating numbers to be added\n");
    scanf("%f %f", &c, &d);
    printf("The sum of floating numbers is :%f\n", c + d);

    return 0;
}