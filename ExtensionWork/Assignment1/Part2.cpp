#include <iostream>

using namespace std;

int main() {
    int i, N;
    cout << "This program prints all the even numbers up to a selected integer." << endl;
    cout << "Choose a number to increment to: ";
    cin >> N;

    for (i = 2; i <= N; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}