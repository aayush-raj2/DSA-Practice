#include <stdio.h>

// Function to reverse an array in-place
void reverse(int A[], int n) {
    int start = 0, end = n - 1;

    while (start < end) {
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;

        start++;
        end--;
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
    int A[] = {1, 2, 3, 4, 5};
    int n = 5;

    reverse(A, n);
    printArray(A, n);

    return 0;
}
