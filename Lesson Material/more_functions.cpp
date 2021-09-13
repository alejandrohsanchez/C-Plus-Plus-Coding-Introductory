#include <iostream>

using namespace std;

/*
The coneVolume function returns the volume of a right circular cone given a radius and height.
The coneVolume function is called from the main function and takes two arguments type double.
*/
double coneVolume(double r, double h) {
    double V;

    V = 3.1415 * (r * r) * (h / 3);

    return V;
}

int main() {
    double radius, height, volume;

    // Omit the endl if you want to use cin or cout on the same line in terminal.
    cout << "Enter the radius: ";
    cin >> radius;

    cout << "Enter the height: ";
    cin >> height;

    // Separate strings and variables with loader (<<)
    volume = coneVolume(radius, height);
    cout << "The volume of the cone is: " << volume << endl;

    return 1;
}