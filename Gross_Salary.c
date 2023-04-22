// Q.2 A task is given for a clerk of a govt. office to calculate the Gross salary of a given employee. As the
// task of calculating manually is time consuming and its error prone, come up with a C program to find the solution.
// Input: Employee id (a 5 digit integer number) basic salary of an employee, % of Daily Allowance (DA) and House Rent Allowance(HRA).
// Expected Output: The salary of an employee:
// The formula to compute the gross salary is:
// gross_salary = basic_salary + DA + HRA

#include <stdio.h>
int main()
{
    int emp_id;
    float gross_salary, DA, HRA, basic_salary;

    // Entry of data
    printf("Enter Employee ID\n");
    scanf("%d", &emp_id);

    // basic_salary
    printf("Enter The basic salary of employee :");
    scanf("%f", &basic_salary);

    // daily_allowance
    printf("Enter the Percent of Daily Allowance :");
    scanf("%f", &DA);

    // house_rent
    printf("Enter the Percent of House Rent :");
    scanf("%f", &HRA);

    // calculation of data
    gross_salary = basic_salary + (DA * basic_salary / 100) + (HRA * basic_salary / 100);

    printf("The Gross salary for Employee with ID %d are :%f'\n", emp_id, gross_salary);
    return 0;
}