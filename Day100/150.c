#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;          // normal structure variable
    struct Student *ptr = &s;  // pointer to structure

    // Modify data using -> operator
    printf("Enter student details:\n");

    printf("Name: ");
    scanf("%s", ptr->name);        // same as s.name

    printf("Roll No: ");
    scanf("%d", &ptr->roll_no);    // same as s.roll_no

    printf("Marks: ");
    scanf("%f", &ptr->marks);      // same as s.marks

    // Display data
    printf("\nDisplaying Student Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
