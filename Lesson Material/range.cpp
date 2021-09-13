#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    if (x > 20) {
        cout << "Less than 20" << endl;
    }
    else if (x == 20) {
        cout << "Equal to 20" << endl;
    }
    else {
        cout << "Greater than 20" << endl;
    }

    // You may remove {} if there is one statement in the body
    // This tells us that there is one line of code that will run
    if (x % 2 > 0)
        cout << "Odd" << endl;
    
    else
        cout << "Even" << endl;

    return 1;
}
