#include <stdio.h>
#include <string.h>

void insertString(char str[], char newStr[], int pos);

int main()
{
    char str[100], newstr[100];
    int pos;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the string to insert: ");
    gets(newstr);

    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    insertString(str, newstr, pos);

    printf("New string: %s\n", str);

    return 0;
}

void insertString(char str[], char newStr[], int pos)
{
    int len1 = strlen(str);
    int len2 = strlen(newStr);
    int i;

    // shift characters after pos to the right by len2 places
    for (i = len1 - 1; i >= pos; i--)
    {
        str[i + len2] = str[i];
    }

    // insert newStr at pos
    for (i = 0; i < len2; i++)
    {
        str[pos + i] = newStr[i];
    }
}
