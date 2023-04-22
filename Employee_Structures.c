#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    int id;
    char dept[50];
    float salary;
};

int main ()
{
int num_emp;
printf("enter the number of employees : ");
scanf("%d", &num_emp);
struct employee emp[num_emp];

for(int i=0;i<num_emp;i++){
    printf("enter the details of the employee %d : \n", i+1);

    printf("enter the name of the employee %d\n", i+1);
    scanf("%s", emp[i].name);
    printf("enter the id of the employee %d\n", i+1);
    scanf("%d", &emp[i].id);
    printf("enter the department of the employee %d\n", i+1);
    scanf("%s", emp[i].dept);
    printf("enter the salary of the employee %d\n", i+1);
    scanf("%f", &emp[i].salary);
}
for(int i=0;i<num_emp;i++){
    printf("\ndetails of employee %d are :\n", i+1);
    printf("Name - %s\n", emp[i].name);
    printf("ID - %d\n", emp[i].id);
    printf("Department - %s\n", emp[i].dept);
    printf("Salary - %f\n\n", emp[i].salary);
}
    return 0;
}