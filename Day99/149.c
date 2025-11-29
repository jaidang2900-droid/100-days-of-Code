#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {

    // Dynamically allocate memory
    struct Student *s = (struct Student*) malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Take input
    printf("Enter student details:\n");

    printf("Name: ");
    scanf("%s", s->name);

    printf("Roll No: ");
    scanf("%d", &s->roll_no);

    printf("Marks: ");
    scanf("%f", &s->marks);

    // Print details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s->name);
    printf("Roll No: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);

    // Free memory
    free(s);

    return 0;
}
