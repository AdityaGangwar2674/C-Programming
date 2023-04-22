#include <stdio.h>
struct Rectangle
{
    float length;
    float breadth;
};

int main()
{
    struct Rectangle rect;
    float area, perimeter;

    printf("enter the length of the rectangle : ");
    scanf("%f", &rect.length);
    printf("enter the breadth of the rectangle : ");
    scanf("%f", &rect.breadth);

    area = rect.length * rect.breadth;
    perimeter = 2 * (rect.length + rect.breadth);

    printf("area of the rectangle = %f\n", area);
    printf("perimeter of the rectangle = %f\n", perimeter);

    return 0;
}