#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, flag = 0;
    char str1[100], str2[100];

    printf("enter string 1 : ");
    gets(str1);

    printf("enter string 2 : ");
    gets(str2);

    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
    {
        flag = 1;
        i++;
        break;
    }

    if (flag == 1)
    {
        printf("strings '%s' and '%s' are equal \n", str1, str2);
    }
    else
    {
        printf("strings '%s' and '%s' are unequal \n", str1, str2);
    }
    return 0;
}