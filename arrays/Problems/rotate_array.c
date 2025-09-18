#include <stdio.h>

// Function to rotate an array by k positions
void rotate(int A[], int n, int k) {
    k = k % n;  // Handle cases when k >= n
    int temp[n];

    // Place each element at its new position
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = A[i];
    }

    // Copy rotated elements back to original array
    for (int i = 0; i < n; i++) {
        A[i] = temp[i];
    }
}

// Function to print the array
void printArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

// Driver code
int main() {
    int A[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 3;

    rotate(A, n, k);
    printArray(A, n);

    return 0;
}
