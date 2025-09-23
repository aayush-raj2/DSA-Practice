#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;

    // Allocate memory in heap for 5 integers
    p = (int *)malloc(5 * sizeof(int));

    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign values
    for(int i = 0; i < 5; i++) {
        p[i] = (i + 1) * 10;
    }

    // Print values
    printf("Values stored in heap memory: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }

    // Free allocated memory
    free(p);

    return 0;
}
