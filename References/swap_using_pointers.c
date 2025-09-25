#include <stdio.h>

// Function that swaps values using pointers (simulating references in C)
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;

    printf("Before Swap: a = %d, b = %d\n", a, b);

    // Passing addresses (like reference in C++)
    swap(&a, &b);

    printf("After Swap: a = %d, b = %d\n", a, b);

    return 0;
}


Output:
Before Swap: a = 10, b = 20
After Swap: a = 20, b = 10
