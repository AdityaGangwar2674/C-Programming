#include <stdio.h>
#include <string.h>
void revstr(char *str);
int main()
{
    char str[100];
    char *ptr = str;
    printf("enter a string : ");
    gets(str);

    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] == '\0';
    }
    revstr(ptr);

    printf("reversed string : %s\n", str);

    return 0;
}

void revstr(char *str)
{
    char *start, *end;
    char temp;
    start = str;
    end = str + strlen(str) - 1;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}