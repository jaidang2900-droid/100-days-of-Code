#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    // Assign values
    strcpy(p.name, "Rahul");
    p.gender = MALE;

    // Print gender
    printf("Name: %s\n", p.name);

    printf("Gender: ");
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;

        case FEMALE:
            printf("Female\n");
            break;

        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}
