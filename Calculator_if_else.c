#include <stdio.h>

int main()
{
    int num, a, b;

    printf("in this calculator we have following operations :\n");
    printf(" 1.ADD\n 2.SUB\n 3.MULTIPLY\n 4.DIVISION\n 5.MODULUS\n");
    printf("Select the operation : ");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("Enter the numbers to be added : ");
        scanf("%d %d", &a, &b);
        printf("The sum of the two numbers added is : %d", a + b);
    }
    else if (num == 2)
    {
        printf("Enter the numbers to be subtracted : ");
        scanf("%d %d", &a, &b);
        printf("The difference of the two numbers subtracted is : %d", a - b);
    }
    else if (num == 3)
    {
        printf("Enter the numbers to be multiplied : ");
        scanf("%d %d", &a, &b);
        printf("The product of the two numbers is : %d", a * b);
    }
    else if (num == 4)
    {

        printf("Enter the numbers to be divided :\n ");
        scanf("%d %d", &a, &b);
        if (b == 0)
        {
            printf("please enter valid denominator \n");
            printf("enter another value of denominator : ");
            scanf("%d", &b);
        }

        printf("The division of the two numbers is  : %f", (float)a / b);
    }
    else if (num == 5)
    {
        if (b == 0)
        {
            printf("please enter valid denominator ");
            printf("enter another value of denominator : ");
            scanf("%d", &b);
        }
        printf("Enter the numbers to be modulated : ");
        scanf("%d %d", &a, &b);
        printf("The remainder is : %d", a % b);
    }
    else
    {
        printf("invalid operation");
    }

    return 0;
}