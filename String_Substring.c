#include <stdio.h>
#include <string.h>

int countSubstring(char str[], char sub[]);

int main()
{
    char str[100], sub[100];

    printf("Enter a string: ");
    gets(str);

    printf("Enter a substring: ");
    gets(sub);

    int count = countSubstring(str, sub);

    printf("%s occurs %d times in %s\n", sub, count, str);

    return 0;
}

int countSubstring(char str[], char sub[])
{
    int i, j, k, count = 0;
    int len1 = strlen(str);
    int len2 = strlen(sub);

    for (i = 0; i <= len1 - len2; i++)
    {
        k = i;
        for (j = 0; j < len2; j++)
        {
            if (str[k] == sub[j])
            {
                k++;
            }
            else
            {
                break;
            }
        }
        if (j == len2)
        {
            count++;
        }
    }

    return count;
}
