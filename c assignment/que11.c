#include <stdio.h>

#define MAX_NAME_LENGTH 50

struct Employee {
    char firstName[MAX_NAME_LENGTH];
    char lastName[MAX_NAME_LENGTH];
    double monthlySalary;
};

void emp_init(struct Employee *e, const char *first, const char *last, double salary) {
    strcpy(e->firstName, first);
    strcpy(e->lastName, last);
    e->monthlySalary = salary;
}

void set_salary(struct Employee *e, double salary) {
    e->monthlySalary = salary;
}

void emp_display(struct Employee *e) {
    printf("Name: %s %s\n", e->firstName, e->lastName);
    printf("Monthly Salary: $%.2f\n", e->monthlySalary);
}

int main() {
    struct Employee emp1, emp2;

    emp_init(&emp1, "John", "Doe", 3000.0);

    printf("Yearly Salary for Employee 1: $%.2f\n", emp1.monthlySalary * 12);

    emp_init(&emp2, "Jane", "Smith", 3500.0);

    printf("Yearly Salary for Employee 2: $%.2f\n", emp2.monthlySalary * 12);

    set_salary(&emp1, 3200.0);

    printf("\nAfter modification:\n");
    emp_display(&emp1);

    return 0;
}
