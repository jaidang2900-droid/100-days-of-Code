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
    struct Date join_date;
};

int main() {
    struct Employee emp_write, emp_read;
    FILE *fp;

    // --- Input Employee Details ---
    printf("Enter Employee Name: ");
    scanf("%s", emp_write.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp_write.id);

    printf("Enter Salary: ");
    scanf("%f", &emp_write.salary);

    printf("Enter Joining Date (day month year): ");
    scanf("%d %d %d",
          &emp_write.join_date.day,
          &emp_write.join_date.month,
          &emp_write.join_date.year);

    // --- Write to Binary File ---
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(&emp_write, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nData written successfully to employee.dat\n");

    // --- Read from Binary File ---
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&emp_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // --- Display Read Data ---
    printf("\n--- Employee Details Read From File ---\n");
    printf("Name: %s\n", emp_read.name);
    printf("ID: %d\n", emp_read.id);
    printf("Salary: %.2f\n", emp_read.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           emp_read.join_date.day,
           emp_read.join_date.month,
           emp_read.join_date.year);

    return 0;
}
