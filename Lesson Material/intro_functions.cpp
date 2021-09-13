#include <iostream>

using namespace std;

/*
The Sum function returns the sum of two integers.
The Sum function is called from the main function.
*/
int Sum(int a, int b) {
    int c;

    c = a + b;

    return c;
}

/*
The Multiply function returns the product of two integers.
The Multiply function is called from the main function.
*/
int Multiply(int a, int b) {
    int c;

    c = a * b;

    return c;
}

int main() {
    int x, y;

    cin >> x;
    cin >> y;

    int z;
    // Call the function 'Sum'. The arguments are x and y.
    // The arguments must be type int.
    z = Sum(x, y);
    cout << z << endl;

    int product;
    product = Multiply(x, y);

    cout << product << endl;

    return 1;
}