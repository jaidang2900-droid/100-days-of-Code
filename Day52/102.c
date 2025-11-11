#include <stdio.h>

int main() {
    int n, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int low = 0, high = n - 1;
    int index = -1;  // will store ceil index

    while (low <= high) {
        int mid = (low + high) / 2;  // find middle index

        if (arr[mid] >= x) {
            index = mid;   // possible ceil found
            high = mid - 1;  // move left to find smaller possible ceil
        } 
        else {
            low = mid + 1;   // move right
        }
    }

    printf("Ceil index: %d\n", index);
    return 0;
}
