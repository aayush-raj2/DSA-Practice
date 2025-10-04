#include <stdio.h>
#include <iostream>
using namespace std;

// Define structure
struct Rectangle {
    int length;
    int breadth;
};

// ✅ Call by Value – new copy of structure is created
int areaByValue(struct Rectangle r) {
    return r.length * r.breadth;
}

// ✅ Call by Address – modifies the actual structure
void changeLength(struct Rectangle *p, int newLength) {
    p->length = newLength;
}

// ✅ (C++ only) Call by Reference – directly refers to original structure
void changeBreadth(struct Rectangle &r, int newBreadth) {
    r.breadth = newBreadth;
}

int main() {
    struct Rectangle rect = {10, 5};

    printf("=== Structure as Parameter ===\n\n");

    // Call by Value
    printf("Area (Call by Value): %d\n", areaByValue(rect));

    // Call by Address
    changeLength(&rect, 20);
    printf("Updated Length (Call by Address): %d\n", rect.length);

    // Call by Reference (C++ only)
    #ifdef __cplusplus
    changeBreadth(rect, 15);
    cout << "\nUpdated Breadth (Call by Reference): " << rect.breadth << endl;
    #endif

    return 0;
}

Output Ex:
=== Structure as Parameter ===

Area (Call by Value): 50
Updated Length (Call by Address): 20
Updated Breadth (Call by Reference): 15
  
---
To run:

in c -> gcc struct_as_parameter.c -o struct_param
./struct_param

in c++ -> g++ struct_as_parameter.cpp -o struct_param
./struct_param
  
