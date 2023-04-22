#include <stdio.h>

int main()
{
    int len = 0;
    char str[100];
    printf("enter string  : ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    printf("length of the string '%s' = %d\n", str, len);

    return 0;
}