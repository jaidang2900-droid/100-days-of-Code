#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that accepts structure and prints its members
void printStudent(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s;

    // Taking input
    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Calling function
    printStudent(s);

    return 0;
}
