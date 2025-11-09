#include <stdio.h>

long long sumUpto(long long x) {
    return x * (x + 1) / 2;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    long long total = sumUpto(n);
    int low = 1, high = n, pivot = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        long long leftSum = sumUpto(mid);
        long long rightSum = total - sumUpto(mid - 1);

        if (leftSum == rightSum) {
            pivot = mid;
            break;
        }
        else if (leftSum < rightSum) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("%d", pivot);
    return 0;
}
