#include <stdio.h>
#include <string.h>
int ispalindrome(char str[], int start, int end)
{
    if (start >= end)
    {
        return 1;
    }
    else if (str[start] != str[end])
    {
        return 0;
    }
    else
    {
        return ispalindrome(str, start + 1, end - 1);
    }
}
int main()
{
    char str[100];
    printf("enter a string : ");
    gets(str);

    if (ispalindrome(str, 0, strlen(str) - 1))
    {
        printf("%s is a palindrome\n", str);
    }
    else
    {
        printf("%s is not a palindrome\n", str);
    }
    return 0;
}