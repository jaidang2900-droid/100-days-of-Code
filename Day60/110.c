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

    if (k > n) {
        printf("Invalid: k should be <= array size");
        return 0;
    }

    // Move the window from left to right
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];

        // Find max in current window
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }

        printf("%d", max);
        if (i != n - k)
            printf(" ");
    }

    return 0;
}
