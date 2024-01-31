#include <stdio.h>

// Function to perform Insertion Sort on an array
void Insertion_Sort(int arr[], int size) {
    int temp = 0;

    // Outer loop for iterating through the array
    for (int i = 1; i <= size - 1; i++) {
        // Inner loop for shifting elements and inserting the current element in its correct position
        for (int j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--) {
            // Swap arr[j] with arr[j+1]
            temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }

    // Output the sorted array
    printf("\n");
    printf("after applying Insertion sort:\n");

    // Print the final sorted array
    for (int i = 0; i < size; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

int main() {
    int size = 0;

    // Display information about Insertion Sort
    printf("!!! Insertion sort !!!\n");
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

    // Call the Insertion Sort function
    Insertion_Sort(arr, size);

    return 0;
}
