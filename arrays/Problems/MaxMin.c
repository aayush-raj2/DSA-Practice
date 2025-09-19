#include <stdio.h>

/*
 * Program: Find Maximum and Minimum in an Array
 * Author: Aayush Raj
 * Description: This program finds the largest and smallest
 *              elements in a given integer array.
 */

int main() {
    // Initialize the array
    int arr[] = {10, 5, 20, 8, 30};

    // Find the size of the array using sizeof
    int n = sizeof(arr) / sizeof(arr[0]);

    // Assume the first element is both max and min initially
    int maxVal = arr[0], minVal = arr[0];

    // Loop through the array starting from index 1
    for (int i = 1; i < n; i++) {
        // If the current element is greater than maxVal, update maxVal
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }

        // If the current element is smaller than minVal, update minVal
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }

    // Print the results
    printf("Maximum: %d\n", maxVal);
    printf("Minimum: %d\n", minVal);

    return 0; // End of program
}
