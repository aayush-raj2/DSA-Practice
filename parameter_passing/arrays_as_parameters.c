#include <stdio.h>

// Function to print array elements
void fun(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() {
    int A[5] = {2, 4, 6, 8, 10};
    fun(A, 5);  // Passing array as parameter
    return 0;
}
