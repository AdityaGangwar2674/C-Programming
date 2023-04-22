#include <stdio.h>

int main()
{
    char name[100];
    int i;

    printf("Enter your name: ");
    gets(name);

    printf("ASCII codes for your name: ");

    for (i = 0; name[i] != '\0'; i++)
    {
        printf("%d ", name[i]);
    }

    return 0;
}
