#include <stdio.h>

// Function to perform Selection Sort on an array
void Selection_Sort(int arr[], int size) {
    int i = 0, temp = 0;
    int min_index;

    // Outer loop for the passes
    for (int pass = 0; pass < size; pass++) {
        // Assume the current index is the minimum
        min_index = pass;

        // Inner loop to find the minimum element in the unsorted region
        for (i = pass + 1; i < size; i++) {
            if (arr[min_index] > arr[i]) {
                min_index = i;
            }
        }

        // Swap the minimum element with the first element of the unsorted region
        if (arr[min_index] < arr[pass]) {
            temp = arr[pass];
            arr[pass] = arr[min_index];
            arr[min_index] = temp;
        }

        // Print the array after each pass
        printf("after pass %d:\n", pass + 1);
        for (int i = 0; i < size; i++) {
            printf("%d \t", arr[i]);
        }
        printf("\n");
    }

    printf("\n");
    printf("after applying selection sort:\n");

    // Print the final sorted array
    for (int i = 0; i < size; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

int main() {
    int size = 0;

    printf("!!! Selection sort !!!\n");
    printf("Time Complexity\nBest case: O(n^2)\nWorst case: O(n^2)\n\n");
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

    // Call the Selection Sort function
    Selection_Sort(arr, size);

    return 0;
}
