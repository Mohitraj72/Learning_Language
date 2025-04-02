#include <iostream>
using namespace std;

void changeA(int *ptr) {
    *ptr = 20;
    cout << *ptr << "\n";
}

int main() {
    int a = 10;
    int &b = a;  // b is a reference to a
    b = 25;      // This changes a as well

    cout << b << "\n";  // Output: 25
    cout << a << "\n";  // Output: 25 (because b is a reference to a)

    changeA(&a);       // Pass address of a to the function
    cout << a << "\n"; // Output: 20 (changed by changeA function)

    return 0;
}