#include <stdio.h>

int main()
{
    int class_r, class_s, age_s, age_r, m_r, m_s, s_s, s_r;

    printf("enter class of ram :");
    scanf("%d", &class_r);

    printf("enter class of shyam :");
    scanf("%d", &class_s);

    if (class_r == class_s)
    {
        printf("ram and shyam both study in same class \n");
    }
    else
    {
        printf("they both study in different classes \n");
    }

    printf("enter age of ram :");
    scanf("%d", &age_r);

    printf("enter age of shyam :");
    scanf("%d", &age_s);

    if (age_r < age_s)
    {
        printf("ram is younger than shyam \n");
    }
    else if (age_r > age_s)
    {
        printf("shyam is younger than ram \n");
    }
    else
    {
        printf("they both are of equal age \n");
    }

    printf("enter marks in mathematics of ram :");
    scanf("%d", &m_r);

    printf("enter marks in mathematics of shyam :");
    scanf("%d", &m_s);

    if (m_r < m_s)
    {
        printf("ram scored less marks than shyam in mathematics \n");
    }
    else if (m_r > m_s)
    {
        printf("shyam scored less marks than ram in mathematics \n");
    }
    else
    {
        printf("they both scored equal marks in mathematics \n");
    }

    printf("enter marks in physics of ram :");
    scanf("%d", &s_r);

    printf("enter marks in physics of shyam :");
    scanf("%d", &s_s);

    if (s_r < s_s)
    {
        printf("ram scored less marks than shyam in science \n");
    }
    else if (s_r > s_s)
    {
        printf("shyam scored less marks than ram in science \n");
    }
    else
    {
        printf("they both scored equal marks in science \n");
    }

    return 0;
}
