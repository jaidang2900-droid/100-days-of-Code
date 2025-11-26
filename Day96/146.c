#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date join_date;  // Nested structure
};

int main() {
    struct Employee emp;

    // Input
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    printf("Enter Joining Date (day month year): ");
    scanf("%d %d %d", &emp.join_date.day,
                     &emp.join_date.month,
                     &emp.join_date.year);

    // Output
    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           emp.join_date.day,
           emp.join_date.month,
           emp.join_date.year);

    return 0;
}
