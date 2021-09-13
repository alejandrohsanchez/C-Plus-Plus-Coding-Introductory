#include <iostream>

using namespace std;

int main() {
    // cout is output
    cout << "Hello World" << endl;

    int x; // This is a declaration.
    x = 5; // This is a definition.

    int y = 2; // This is a declaration and definition.

    /*
    This is
    a multi-line
    comment
    */

    // single line comment
    int z = x * y; // Multiplication
    int w = x % y; // Modulus
    int sum = x + y; // Sum

    // cin is input
    int t;
    cin >> t;
    cout << t << endl;

    return 0;
}