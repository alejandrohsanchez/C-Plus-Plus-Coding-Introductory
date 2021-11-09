#include <iostream>
using namespace std;

int main() {
    /*
    // Example 1
    int x;

    cout << "Enter a number: ";
    cin >> x;
    
    switch (x)
    {
        case 2:
            cout << "You entered 2!" << endl;
            break;
        case 5:
            cout << "You entered 5!" << endl;
            break;
        default:
            cout << "Not recognized" << endl;
    }

    cout << "This is the end of the switch" << endl;
    */    
    
    /*
    // Example 2
    // op means operator.
    char op;
    cout << "Enter an operator: ";
    cin >> op;

    switch (op)
    {
        case '+':
            cout << "You entered '+'" << endl;
            break;
        case 'x':
            cout << "You entered 'x'" << endl;
            break;
        case '/':
            cout << "You entered '/'" << endl;
            break;
        case '-':
            cout << "You entered '-'" << endl;
            break;
        default:
            cout << "Unaccepted operator" << endl;
    }
    */

    /*
    // Example 3
    int a, b;
    char c;
    cin >> a; // int
    cin >> c; // char
    cin >> b; // int

    cout << a << "\n" << c << "\n" << b << endl;
    */


    // Example 4
    int a, b;
    char op;
    cin >> a; // int
    cin >> op; // char
    cin >> b; // int

    switch (op)
    {
        case '+':
            cout << a + b << endl;
            break;
        case 'x':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        default:
            cout << "Unaccepted operator" << endl;
    }

    return 1;
}