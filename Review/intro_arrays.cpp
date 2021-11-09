#include <iostream>
using namespace std;

int main() {
    // Define and declare an array of type char.
    char name [4] = {'A', 'l', 'e', 'x'};
    
    cout << name[0] << endl;

    cout << name[3] << endl;

    // Declare an array of size 10 of type int.
    int intArray [10];

    // Defining the array...
    intArray[0] = 1;
    intArray[1] = 3;
    intArray[2] = 5;

    cout << intArray[2] << " " << intArray[1] << " " << intArray[0] << " " << endl;

    int i;
    // i starts at 0.
    // as long as i is less than 10, continue.
    // at the end of the loop, i++ (i = i + 1).
    // Assigning values 1 - 10 in the array.
    for (i = 0; i < 10; i++) {
        intArray[i] = i;
    }

    // Printing out each value, separated by spaces.
    for (i = 0; i < 10; i++) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    // Printing in descending order.
    for (i = 9; i >= 0; i--) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    // Multiply every value in intArray by 3 and print it out.
    // Hint: array[index] = array[index] * 3;
    for (i = 0; i < 10; i++) {
        intArray[i] = intArray[i] * 3;
        cout << intArray[i] << " ";
    }
    cout << endl;

}