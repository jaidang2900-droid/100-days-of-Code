#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    // Reading details of 5 students
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Printing details of 5 students
    printf("\n\n--- Student Details ---\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll_no);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
