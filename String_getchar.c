#include <stdio.h>

int main()
{
    char str[11]; // declare a character array of length 11 to hold 10 characters and null terminator

    printf("Enter a string of length 10 characters: ");

    // use a for loop to read 10 characters from the user using getchar()
    for (int i = 0; i < 10; i++)
    {
        str[i] = getchar();
    }
    str[10] = '\0'; // add a null terminator to the end of the string

    printf("The string you entered is: %s\n", str);

    return 0;
}
