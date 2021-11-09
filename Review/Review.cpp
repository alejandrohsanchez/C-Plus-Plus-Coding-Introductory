#include <iostream>
using namespace std;

void f() {
    cout << "Printing from f()" << endl;
}

// Function overloading.
void f(char A) {
    // char A is a local variable in the scope of f
    cout << "The letter is " << A << endl;
}

void f(string B) {
    cout << "The string is " << B << endl;
}

int f(int x) {
    x = x + 1;
    return x;
}


int main() {
    
    // Declaring variables.
    int x;

    double y;

    float z;

    string s;

    char c, C;

    // Defining variables.
    x = 10;

    y = 10.33333;

    z = 0.58042378572305;

    s = "Hello";

    c = 'g';

    C = c - 32;



    //cout << "Hello World" << endl;
    
    // Printing out an int, double, float, string, and char.
    cout << x << endl;

    cout << y << endl;

    cout << z << endl;

    cout << s << endl;

    cout << c << endl;

    cout << C << endl;

    f();

    f(C);

    f(s);

    cout << f(24) << endl;

    int v;
    cin >> v;

    cout << f(v) << endl;
    
    return 1;
}