// Q.4 Ram and Sam are two students who appeared for an examination. In the score sheet, it has been
// shown that Ram got X marks and Sam got Y marks. Later, the examiner realized that in the score
// sheet the marks of Ram and Sam were entered wrong and in particular, both their marks have been
// interchanged, i.e., Ram original marks are Y and Sam original marks are X. Write a program to read
// the initial values of X and Y, and swap the values of X and Y i.e., in the output X contains the initial
// value of Y and Y contains the initial value of X. (Hint: you can use an extra new variable to
// perform the swap.)

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Marks For Ram : ");
    scanf("%d", &a);

    printf("Enter Marks For Sam : ");
    scanf("%d", &b);

    printf("Marks after correction ");
    c = a;
    a = b;
    b = c;
    printf("The Corrected Marks For Ram : %d\n", a);
    printf("The Corrected Marks For Sam : %d\n", b);
    return 0;
}