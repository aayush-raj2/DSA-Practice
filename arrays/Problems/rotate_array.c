#include <stdio.h>

void rotate(int A[], int n, int k) {
    k = k % n;
    int temp[n];
    for (int i = 0; i < n; i++) temp[(i + k) % n] = A[i];
    for (int i = 0; i < n; i++) A[i] = temp[i];
}

void printArray(int A[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    printf("\n");
}

int main() {
    int A[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 3;
    rotate(A, n, k);
    printArray(A, n);
    return 0;
}
