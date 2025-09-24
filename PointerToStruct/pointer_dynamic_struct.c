#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    struct Rectangle *p;

    // dynamically allocate memory for a Rectangle in heap
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    p->length = 10;
    p->breadth = 5;

    printf("Length: %d, Breadth: %d\n", p->length, p->breadth);

    free(p); // free allocated memory
    return 0;
}
