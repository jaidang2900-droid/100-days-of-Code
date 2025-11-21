#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role r;
    int choice;

    printf("Enter your role (0 = ADMIN, 1 = USER, 2 = GUEST): ");
    scanf("%d", &choice);

    r = choice;   // Assign the enum value

    switch (r) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! Please login for more options.\n");
            break;

        default:
            printf("Invalid role number.\n");
    }

    return 0;
}
