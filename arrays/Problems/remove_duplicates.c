#include <stdio.h>

// Function to remove duplicates from a sorted array
int removeDuplicates(int A[], int n) {
    if (n == 0) return 0;

    int j = 0; // Index of the last unique element
    for (int i = 1; i < n; i++) {
        if (A[i] != A[j]) {
            j++;
            A[j] = A[i];
        }
    }
    return j + 1; // New length of array without duplicates
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
    int A[] = {1, 1, 2, 2, 3, 3, 4, 5, 5};
    int n = 9;

    n = removeDuplicates(A, n);
    printArray(A, n);

    return 0;
}
