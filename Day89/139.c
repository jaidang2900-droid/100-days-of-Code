#include <stdio.h>

enum Role {
    ADMIN = 10,
    USER = 20,
    GUEST = 30
};

int main() {

    printf("ADMIN = %d\n", ADMIN);
    printf("USER  = %d\n", USER);
    printf("GUEST = %d\n", GUEST);

    return 0;
}
