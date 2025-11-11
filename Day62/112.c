#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSum = arr[0];
    int currSum = arr[0];

    for (int i = 1; i < n; i++) {
        // Either start new subarray or extend the current one
        if (currSum + arr[i] > arr[i])
            currSum = currSum + arr[i];
        else
            currSum = arr[i];

        // Update max sum if needed
        if (currSum > maxSum)
            maxSum = currSum;
    }

    printf("Maximum subarray sum: %d\n", maxSum);

    return 0;
}
