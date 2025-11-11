#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);

    // If k is greater than array size, no window possible
    if (k > n) {
        printf("Invalid: k should be <= array size");
        return 0;
    }

    // Step 1: Find the sum of first window of size k
    int windowSum = 0;
    for (int i = 0; i < k; i++)
        windowSum += arr[i];

    int maxSum = windowSum;

    // Step 2: Slide the window
    for (int i = k; i < n; i++) {
        windowSum = windowSum - arr[i - k] + arr[i]; // Remove left, add right
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("%d", maxSum);

    return 0;
}
