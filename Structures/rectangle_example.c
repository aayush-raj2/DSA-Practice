#include <stdio.h>
// Defining a Structure
struct Rectangle {
    int length;
    int breadth;
};

int main() {
    // Declaring a Structure Variable
    struct Rectangle r;

    // Declaration + Initialization
    struct Rectangle r2 = {10, 5};

    // Accessing members using dot operator
    r.length = 15;
    r.breadth = 10;

    printf("Area of rectangle is %d\n", r.length * r.breadth);
    printf("Area of rectangle (r2) is %d\n", r2.length * r2.breadth);

    return 0;
}

Output:
Area of rectangle is 150
Area of rectangle (r2) is 50
