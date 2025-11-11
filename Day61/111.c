#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);

    printf("First negative in each window: ");
    for (int i = 0; i <= n - k; i++) {
        int found = 0;

        // Check each window of size k
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;  // Stop when first negative found
            }
        }

        if (!found)
            printf("0 ");
    }

    return 0;
}
