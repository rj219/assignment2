#include <stdio.h>


struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};


void inputEmployee(struct Employee *emp) {
    printf("Enter employee number: ");
    scanf("%d", &emp->empno);

    printf("Enter employee name: ");
    scanf(" %[^\n]s", emp->empname);

    printf("Enter employee address: ");
    scanf(" %[^\n]s", emp->address);

    printf("Enter employee age: ");
    scanf("%d", &emp->age);
}


void displayEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Employee Address: %s\n", emp.address);
    printf("Employee Age: %d\n", emp.age);
}

int main() {
    
    struct Employee employees[5];

    
    for (int i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        inputEmployee(&employees[i]);
        printf("\n");
    }

    printf("Employee Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        displayEmployee(employees[i]);
        printf("\n");
    }

    return 0;
}
