#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int &r = a;   // reference to variable 'a'

    cout << "Value of a: " << a << endl;
    r++;  // increment via reference

    cout << "Value of r (reference): " << r << endl;
    cout << "Value of a (after increment): " << a << endl;

    return 0;
}
