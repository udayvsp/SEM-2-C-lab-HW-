#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        // Swap the elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the start and end pointers towards each other
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    reverseArray(arr, 0, n-1);

    printf("\nReversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}