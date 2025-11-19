#include <stdio.h>

// Define enum
enum Status {
    SUCCESS,   // 0
    FAILURE,   // 1
    TIMEOUT    // 2
};

int main() {
    enum Status result;

    // Assign a test value (change this to try others)
    result = TIMEOUT;

    // Print message based on status
    if (result == SUCCESS) {
        printf("Operation completed successfully.\n");
    }
    else if (result == FAILURE) {
        printf("Operation failed.\n");
    }
    else if (result == TIMEOUT) {
        printf("Operation timed out.\n");
    }
    else {
        printf("Unknown status.\n");
    }

    return 0;
}
