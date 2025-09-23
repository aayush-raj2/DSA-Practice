#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    struct Rectangle r = {10, 5};   // existing structure
    struct Rectangle *p = &r;       // pointer to structure

    r.length = 15;          // normal access
    p->length = 20;         // pointer access
    (*p).breadth = 25;      // alternative pointer access

    printf("Length: %d, Breadth: %d\n", r.length, r.breadth);
    return 0;
}
