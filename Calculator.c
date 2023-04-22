#include <stdio.h>

int main()
{
    int a, b;
    char ch;

    printf("in this calculator we have following operations :\n");
    printf(" 1.ADD\n 2.SUB\n 3.MULTIPLY\n 4.DIVISION\n 5.MODULUS\n");
    printf("Select the operator : ");
    scanf("%c", &ch);

    switch (ch)
    {
    case '+':
        printf("Enter the numbers to be added : ");
        scanf("%d %d", &a, &b);
        printf("The sum of the two numbers added is : %d\n", a + b);
        break;

    case '-':
        printf("Enter the numbers to be subtracted : ");
        scanf("%d %d", &a, &b);
        printf("The difference of the two numbers subtracted is : %d\n", a - b);
        break;

    case '*':
        printf("Enter the numbers to be multiplied : ");
        scanf("%d %d", &a, &b);
        printf("The product of the two numbers is : %d\n", a * b);
        break;

    case '/':
        printf("Enter the numbers to be divided : ");
        scanf("%d %d", &a, &b);
        if (b == 0)
        {
            printf("please enter valid denominator \n");
            printf("enter another value of denominator : ");
            scanf("%d", &b);
        }

        printf("The division of the two numbers is  : %f\n", (float)a / b);
        break;

    case '%':
        printf("Enter the numbers to be modulated : ");
        scanf("%d %d", &a, &b);
        if (b == 0)
        {
            printf("please enter valid denominator \n");
            printf("enter another value of denominator : ");
            scanf("%d", &b);
        }
        printf("The remainder is : %d", a % b);
        break;

    default:
        printf("invalid operation");
        break;
    }

    return 0;
}