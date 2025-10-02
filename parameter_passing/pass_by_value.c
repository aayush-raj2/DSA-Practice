#include <stdio.h>

// Pass by Value: Original values are not changed
void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10, b = 20;
    swap(a, b);
    printf("After swap (Pass by Value): %d %d\n", a, b);
    return 0;
}
