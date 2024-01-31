#include <stdio.h>

// Function to perform Bubble Sort on an array
void Bubble_Sort(int arr[], int size) {
    int temp;

    // Outer loop for passes
    for (int pass = 1; pass < size; pass++) {
        // Inner loop for comparisons and swaps
        for (int i = 0; i < size - pass; i++) {
            // Compare adjacent elements and swap if needed
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }

        // Print the array after each pass
        printf("after pass %d:\n", pass);
        for (int i = 0; i < size; i++) {
            printf("%d \t", arr[i]);
        }
        printf("\n");
    }

    printf("\n");
    printf("after applying bubble sort:\n");

    // Print the final sorted array
    for (int i = 0; i < size; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

int main() {
    int size = 0;

    printf("!!! Bubble sort !!!\n");
    printf("Time Complexity\nBest case: O(n)\nWorst case: O(n^2)\n\n");
    printf("Space Complexity: O(1)\n\n");

    // Input size of the array
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the Bubble Sort function
    Bubble_Sort(arr, size);

    return 0;
}
