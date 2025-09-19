#include <stdio.h>

/*
 * Program: Merge Two Sorted Arrays
 * Author: Aayush Raj
 * Description:
 *   This program merges two sorted arrays (A and B)
 *   into a single sorted array (C).
 */

// Function to merge two sorted arrays
void merge(int A[], int n, int B[], int m, int C[]) {
    int i = 0, j = 0, k = 0;

    // Compare elements from both arrays and copy the smaller one
    while (i < n && j < m) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    // Copy any remaining elements from A (if B is finished)
    while (i < n) {
        C[k++] = A[i++];
    }

    // Copy any remaining elements from B (if A is finished)
    while (j < m) {
        C[k++] = B[j++];
    }
}

// Function to print an array
void printArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

// Driver code
int main() {
    int A[] = {1, 3, 5, 7};   // First sorted array
    int B[] = {2, 4, 6, 8};   // Second sorted array
    int C[8];                 // Resultant merged array (size = n + m)

    merge(A, 4, B, 4, C);

    // Print merged sorted array
    printArray(C, 8);

    return 0;
}
