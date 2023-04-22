#include <stdio.h>
#include <string.h>

void alternate(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (i % 2 == 0)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                continue;
            }
            else if (str[i] == ' ')
            {
                continue;
            }
            else
            {
                str[i] += 32;
            }
        }
        else
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                continue;
            }
            else if (str[i] == ' ')
            {
                continue;
            }
            else
            {
                str[i] -= 32;
            }
        }
    }
    printf("\n");
    printf("resulting string = %s\n", str);
}
int main()
{
    char str[100];
    printf("enter a string : ");
    gets(str);
    
    int len = strlen(str);
    alternate(str);
    return 0;
}