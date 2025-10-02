#include <iostream>
using namespace std;

// Call by Reference: C++ specific
void swap(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10, b = 20;
    swap(a, b);
    cout << "After swap (Call by Reference): " << a << " " << b << endl;
    return 0;
}
