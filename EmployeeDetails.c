//C program to store data of 20 employees
#include <stdio.h>
struct employee
{
    char name[30];
    int empid;
    char dptname[30];
    float salary;
};
 
int main()
{
    int i;
    for(i=0;i<20;i++)
    {
    struct employee emp;
    printf("Enter the employee's details:\n");
    printf("Name of employee: ");          
    gets(emp.name);
    printf("Id number of the employee: ");            
    scanf("%d",&emp.empid);
    printf("Salary of employee: ");        
    scanf("%f",&emp.salary);
    printf("Department in which the employee works: ");
    gets(emp.dptname);
    printf("\nEntered detail is:");
    printf("Name of employee: %s",emp.name);
    printf("Id of employee: %d",emp.empid);
    printf("Salary of employee: %f",emp.salary);
    printf("Department name of employee: %s",emp.dptname);
    }
    return 0;
}
