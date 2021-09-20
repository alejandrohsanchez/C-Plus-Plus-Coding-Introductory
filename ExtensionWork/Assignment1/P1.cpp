#include <iostream>

using namespace std;

int main() {
    int y = 1, sum = 0, temp;

    cout << "This program calculates the sum of a series of numbers entered. Tell the program when to stop with 0." << endl;
    while (y == 1) {
        cout << "Enter a number: ";
        cin >> temp;
        sum += temp;
        cout << "Continue? (1 for yes, 0 for no) ";
        cin >> y;
    }
    
    cout << "The final sum is " << sum;
    return 0;
}