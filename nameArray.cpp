#include <iostream>
using namespace std;

int main() {
    int i;
    char name[4];

    cout << "Enter each character of your name one at a time: " << endl;
    for (i = 0; i < 4; i++) {
        cin >> name[i];
    }
    cout << endl;

    for (i = 0; i < 4; i++) {
        cout << name[i];
    }
    cout << endl;

    for (i = 0; i < 4; i++) {
        name[i] = name[i] - 32;
    }

    cout << "The name in uppercase is: " << endl;
    for (i = 0; i < 4; i++) {
        cout << name[i];
    }
    cout << endl;

    return 1;
}