#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        int prevGreater = -1;

        // Search on the left side
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;
            }
        }

        printf("%d", prevGreater);

        // Print comma except for the last element
        if(i != n - 1)
            printf(",");
    }

    return 0;
}
