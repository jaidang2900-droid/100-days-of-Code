#include <stdio.h>

int firstOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid;      // store index
            high = mid - 1;    // move left to find first occurrence
        }
        else if (arr[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return result;
}

int lastOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid;      // store index
            low = mid + 1;     // move right to find last occurrence
        }
        else if (arr[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int n, target;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    int first = firstOccurrence(nums, n, target);
    int last = lastOccurrence(nums, n, target);

    if (first == -1)
        printf("[-1, -1]");
    else
        printf("[%d, %d]", first, last);

    return 0;
}
