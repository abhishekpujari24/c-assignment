#include <stdio.h>

int main() {
    int marks[5];
    int totalMarks = 0;

    printf("Enter marks for five subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }

    float averageMarks = (float)totalMarks / 5.0;

    char grade;
    if (averageMarks >= 90)
        grade = 'E';
    else if (averageMarks >= 80)
        grade = 'A';
    else if (averageMarks >= 70)
        grade = 'B';
    else if (averageMarks >= 60)
        grade = 'C';
    else
        grade = 'F';

    printf("Grade: %c\n", grade);

    return 0;
}
