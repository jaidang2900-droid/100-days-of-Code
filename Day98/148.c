#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1, s2;

    // Input for first student
    printf("Enter details of first student:\n");
    printf("Name: ");
    scanf("%s", s1.name);

    printf("Roll No: ");
    scanf("%d", &s1.roll_no);

    printf("Marks: ");
    scanf("%f", &s1.marks);

    // Input for second student
    printf("\nEnter details of second student:\n");
    printf("Name: ");
    scanf("%s", s2.name);

    printf("Roll No: ");
    scanf("%d", &s2.roll_no);

    printf("Marks: ");
    scanf("%f", &s2.marks);

    // Compare structures
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks) {
        printf("\nBoth structures are IDENTICAL.\n");
    } else {
        printf("\nBoth structures are NOT identical.\n");
    }

    return 0;
}
