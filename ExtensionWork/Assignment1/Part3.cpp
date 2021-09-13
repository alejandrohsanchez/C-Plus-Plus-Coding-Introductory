#include <iostream>

using namespace std;

int main() {
    int max = 0, temp, x = 1;
    cout << "This program remembers the maximum positive integer value entered. Tell the program to stop with 0 when you are done." << endl;
    while (x == 1) {
        cout << "Enter a number: ";
        cin >> temp;
        if (max < temp) {
            max = temp;
        }
        cout << "The max is " << max << endl;
        cout << "Continue? (1 for yes, 0 for no) ";
        cin >> x;
    }

    cout << "The max is " << max << endl;
    return 0;
}