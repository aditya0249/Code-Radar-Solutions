#include <stdio.h>

int main() {
    int n, count;
    scanf("%d", &n);
    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count frequency and skip printing repeated elements
    for (int i = 0; i < n; i++) {
        count = 0;

        // Skip if the element has already been counted
        int alreadyCounted = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                alreadyCounted = 1;
                break;
            }
        }

        if (alreadyCounted) {
            continue;
        }

        // Count the frequency of the current element
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Print the element and its frequency
        printf("%d %d\n", arr[i], count);
    }

    return 0;
}
