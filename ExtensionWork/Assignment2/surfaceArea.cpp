#include <iostream>
#include <math.h>

using namespace std;

double volCube(double a) {
    double V = a * a * a;
    return V;
}

double volTri(double a, double b, double c, double h) {
    double V = 0.25 * h * sqrt((-1 * pow(a, 4)) + (2 * pow(a * b, 2)) + (2 * pow(a * c, 2)) - pow(b, 4) + (2 * pow(b * c, 2)) - pow(c, 4));
    return V;
}

double volCyl(double r, double h, double pi) {
    double V = pi * pow(r, 2) * h;
    return V;
}

int main() {
    double a1, a2, b, c, h1, r, h2, pi = 3.1415, V1, V2, V3;

    cout << "Enter the edge length of a cube: ";
    cin >> a1;

    cout << "Enter side a of the triangular prism: ";
    cin >> a2;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter side c: ";
    cin >> c;
    cout << "Enter the height of the triangular prism: ";
    cin >> h1;

    cout << "Enter the radius of the cylinder: ";
    cin >> r;
    cout << "Enter the height of the cylinder: ";
    cin >> h2;

    V1 = volCube(a1);
    V2 = volTri(a2, b, c, h1);
    V3 = volCyl(r, h2, pi);

    cout << "The volume of the cube is: " << V1 << endl;
    cout << "The volume of the triangular prism is: " << V2 << endl;
    cout << "The volume of the cylinder is: " << V3 << endl;
    return 0;
}