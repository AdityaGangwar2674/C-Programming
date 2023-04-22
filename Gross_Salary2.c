// Q.2 A task is given for a clerk of a govt. office to calculate the Gross salary of a given employee. As the
// task of calculating manually is time consuming and its error prone, come up with a solution in C
// programming language to find the solution.
// Consider the data given below:
// 1.Basic Salary <= 10000 : HRA = 20%, DA = 80%
// 2.Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%
// 3.Basic Salary >= 20001 : HRA = 30%, DA = 95%
// The formula to compute the gross salary is:
// gross salary = basic salary + DA + HRA
// where DA is the Daily Allowance and HRA is House Rent Allowance

#include <stdio.h>
int main()
{
    float basic_salary;
    float gross_salary;
    float HRA;
    float DA;

    printf("Enter the basic salary of the employee ");
    scanf("%f", &basic_salary);

    if (basic_salary <= 10000)
    {
        HRA = 0.2 * basic_salary;
        DA = 0.8 * basic_salary;
    }

    else if (basic_salary >= 10001 && basic_salary <= 20000)
    {
        HRA = 0.25 * basic_salary;
        DA = 0.9 * basic_salary;
    }

    else if (basic_salary >= 20001)
    {
        HRA = 0.3 * basic_salary;
        DA = 0.95 * basic_salary;
    }
    gross_salary = HRA + DA + basic_salary;
    printf("The gross salary of the employee is %f ", gross_salary);

    return 0;
}