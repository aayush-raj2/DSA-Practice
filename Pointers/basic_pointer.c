#include <stdio.h>

int main() {
    int a = 10;     // data variable
    int *p;         // pointer declaration

    p = &a;         // assignment (storing address of 'a')

    printf("Value of a: %d\n", a);
    printf("Value using pointer: %d\n", *p); // dereferencing
    printf("Address of a: %p\n", (void*)&a);
    printf("Pointer p stores address: %p\n", (void*)p);

    return 0;
}
