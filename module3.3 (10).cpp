#include <stdio.h>

struct Employee
 {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void inputEmployees(struct Employee employees[], int count) 
{
    for (int i = 0; i < count; i++) 
	{
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Employee Name: ");
        scanf("%s", employees[i].empname);
        printf("Address: ");
        scanf("%s", employees[i].address);
        printf("Age: ");
        scanf("%d", &employees[i].age);
    }
}

void printEmployees(struct Employee employees[], int count) 
{
    for (int i = 0; i < count; i++)
	 {
        printf("\nEmployee %d Information:\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);
    }
}

int main()
 {
    const int numEmployees = 5;
    struct Employee employees[numEmployees]; 
    
    inputEmployees(employees, numEmployees);
    
    printf("\nEmployee Information for Five Employees:\n");
    printEmployees(employees, numEmployees);

    return 0;
}

