#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev_str[100] = {'\0'};
    int i, len = 0, flag = 0;
    int n = strlen(str);
    printf("enter a string : ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    printf("length of the string %s is = %d\n", str, strlen(str));

    for (i = 0; i < len; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("%s is not a palindrome\n");
    }
    else
    {
        printf("%s is a palindrome\n");
    }

    return 0;
}