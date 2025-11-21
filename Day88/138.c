#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST,
    TOTAL_ROLES   // helper to know how many enum values
};

int main() {
    // Array of names matching the enum order
    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};

    for (int i = 0; i < TOTAL_ROLES; i++) {
        printf("%s = %d\n", roleNames[i], i);
    }

    return 0;
}
