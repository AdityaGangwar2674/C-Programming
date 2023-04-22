#include <stdio.h>

int main()
{
    int a, b, *ptr1, *ptr2;

    printf("enter the two numbers : ");
    scanf("%d %d", &a, &b);

    printf("the numbers before swapping\na = %d\nb = %d\n", a, b);

    ptr1 = &a;
    ptr2 = &b;

    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("the numbers after swapping\na = %d\nb = %d\n", a, b);

    return 0;
}