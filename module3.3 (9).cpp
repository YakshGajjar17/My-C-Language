#include <stdio.h>

struct Employee 
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void inputEmployee(struct Employee *emp)
 {
    printf("Enter employee details:\n");
    printf("Employee Number: ");
    scanf("%d", &emp->empno);
    printf("Employee Name: ");
    scanf("%s", emp->empname);
    printf("Address: ");
    scanf("%s", emp->address);
    printf("Age: ");
    scanf("%d", &emp->age);
}

void printEmployee(struct Employee emp) 
{
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() 
{
    struct Employee emp; 
    
    inputEmployee(&emp);
    
    printf("\nEmployee Information:\n");
    printEmployee(emp);

    return 0;
}

