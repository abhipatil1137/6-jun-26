#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollno;
    float marks;
    char grade;
};

// Function to assign grade
void assignGrade(struct Student *s) {
    if (s->marks >= 90)
        s->grade = 'A';
    else if (s->marks >= 75)
        s->grade = 'B';
    else if (s->marks >= 60)
        s->grade = 'C';
    else if (s->marks >= 35)
        s->grade = 'D';
    else
        s->grade = 'F';
}

int main() {
    struct Student students[3];
    int i, top = 0;

    // Input student details
    for (i = 0; i < 3; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollno);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        // Assign grade
        assignGrade(&students[i]);

        // Find top performer
        if (students[i].marks > students[top].marks) {
            top = i;
        }
    }

    // Display student records
    printf("\n\nStudent Records\n");
    printf("---------------------------------------------\n");
    printf("Name\t\tRoll No\tMarks\tGrade\n");
    printf("---------------------------------------------\n");

    for (i = 0; i < 3; i++) {
        printf("%s\t\t%d\t%.2f\t%c\n",
               students[i].name,
               students[i].rollno,
               students[i].marks,
               students[i].grade);
    }

    printf("---------------------------------------------\n");

    // Display top performer
    printf("\nTop Performer:\n");
    printf("Name: %s\n", students[top].name);
    printf("Roll No: %d\n", students[top].rollno);
    printf("Marks: %.2f\n", students[top].marks);
    printf("Grade: %c\n", students[top].grade);

    return 0;
}