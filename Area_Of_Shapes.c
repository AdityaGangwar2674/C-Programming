#include <stdio.h>

int main()
{
    int r, area_c, sd, area_s, l, b, area_r, base, hgt, area_t;
    char ch;

    printf("the areas of the following shapes can be calculated :\n");
    printf(" 1.CIRCLE\n 2.SQUARE\n 3.RECTANGLE\n 4.TRIANGLE\n ");

    printf("enter the initial of the shape whose area is to be calculated : ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'c':
    case 'C':
        printf("Enter the radius of the circle : ");
        scanf("%d", &r);
        area_c = 3.14 * r * r;
        printf("The area of the circle is : %f\n", (float)area_c);
        break;

    case 's':
    case 'S':
        printf("Enter the side of the square: ");
        scanf("%d", &sd);
        area_s = sd * sd;
        printf("The area of the square is : %d\n", area_s);
        break;

    case 'r':
    case 'R':
        printf("Enter the length of the rectangle : ");
        scanf("%d", &l);

        printf("Enter the breadth of the rectangle : ");
        scanf("%d", &b);
        area_r = l * b;
        printf("The area of the rectangle is  : %d\n", area_r);
        break;

    case 't':
    case 'T':
        printf("Enter the base of the triangle : ");
        scanf("%d", &base);

        printf("Enter the height of the triangle : ");
        scanf("%d", &hgt);

        area_t = 0.5 * base * hgt;
        printf("The area of the triangle is : %f\n", (float)area_t);
        break;

    default:
        printf("enter a valid character \n");
        break;
    }

    return 0;
}