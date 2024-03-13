#include <stdio.h>

struct Student {
    char name[50];
    char rollNo[20];
    int totalMarks;
};

void readStudent(struct Student *student) {
    printf("Enter student name: ");
    scanf("%s", student->name);

    printf("Enter roll number: ");
    scanf("%s", student->rollNo);

    printf("Enter total marks obtained: ");
    scanf("%d", &student->totalMarks);
}

void displayStudent(struct Student student) {
    printf("\nStudent Name: %s\n", student.name);
    printf("Roll Number: %s\n", student.rollNo);
    printf("Total Marks Obtained: %d\n", student.totalMarks);
}

int main() {
    struct Student student;

    readStudent(&student);

    printf("\nStudent Information:\n");
    displayStudent(student);

    return 0;
}
