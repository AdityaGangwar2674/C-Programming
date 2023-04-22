#include <stdio.h>
void count(char *str, int *vow_ct, int *cons_ct)
{
    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            (*vow_ct)++;
        }
        else if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
        {
            (*cons_ct)++;
        }
        str++;
    }
}
int main()
{
    char str[100];
    int vow_ct = 0, cons_ct = 0;
    printf("enter a string : ");
    gets(str);
    count(str, &vow_ct, &cons_ct);
    printf("vowels = %d\n", vow_ct);
    printf("consonants = %d\n", cons_ct);
    return 0;
}
