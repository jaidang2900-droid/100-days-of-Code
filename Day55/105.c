#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Check each element count
    for (int i = 0; i < n; i++) {
        int count = 1;

        for (int j = i + 1; j < n; j++) {   // Count how many times nums[i] appears
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        if (count > n / 2) {   // Check if it's majority
            printf("%d", nums[i]);
            return 0;
        }
    }

    printf("-1");  // No majority element found
    return 0;
}
