#include <stdio.h>

void merge(int A[], int n, int B[], int m, int C[]) {
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (A[i] < B[j]) C[k++] = A[i++];
        else C[k++] = B[j++];
    }
    while (i < n) C[k++] = A[i++];
    while (j < m) C[k++] = B[j++];
}

void printArray(int A[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    printf("\n");
}

int main() {
    int A[] = {1, 3, 5, 7};
    int B[] = {2, 4, 6, 8};
    int C[8];
    merge(A, 4, B, 4, C);
    printArray(C, 8);
    return 0;
}
