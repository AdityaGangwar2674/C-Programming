#include <stdio.h>

int add(int num1, int num2)
{
    return num1 + num2;
}

int subtract(int num1, int num2)
{
    return num1 - num2;
}

int multiply(int num1, int num2)
{
    return num1 * num2;
}

float divide(int num1, int num2)
{
    return (float)num1 / num2;
}

int modulus(int num1, int num2)
{
    return num1 % num2;
}

int main()
{
    int num1, num2, result;
    char op;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (op)
    {
    case '+':
        result = add(num1, num2);
        printf("%d + %d = %d\n", num1, num2, result);
        break;
    case '-':
        result = subtract(num1, num2);
        printf("%d - %d = %d\n", num1, num2, result);
        break;
    case '*':
        result = multiply(num1, num2);
        printf("%d * %d = %d\n", num1, num2, result);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Error: division by zero.\n");
        }
        else
        {
            float res = divide(num1, num2);
            printf("%d / %d = %f\n", num1, num2, res);
        }
        break;
    case '%':
        if (num2 == 0)
        {
            printf("Error: division by zero.\n");
        }
        else
        {
            result = modulus(num1, num2);
            printf("%d %% %d = %d\n", num1, num2, result);
        }
        break;
    default:
        printf("Invalid operator.\n");
    }

    return 0;
}
