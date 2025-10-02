#include <stdio.h>

// Call by Address: Values are modified
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;
    swap(&a, &b);
    printf("After swap (Call by Address): %d %d\n", a, b);
    return 0;
}
