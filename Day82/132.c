#include <stdio.h>

// Define enum for traffic lights
enum TrafficLight {
    RED,    // 0
    YELLOW, // 1
    GREEN   // 2
};

int main() {
    enum TrafficLight signal;

    // Assign a value (you can change this to test)
    signal = RED;

    // Print message based on signal value
    if (signal == RED) {
        printf("Stop\n");
    }
    else if (signal == YELLOW) {
        printf("Wait\n");
    }
    else if (signal == GREEN) {
        printf("Go\n");
    }
    else {
        printf("Invalid Signal\n");
    }

    return 0;
}
