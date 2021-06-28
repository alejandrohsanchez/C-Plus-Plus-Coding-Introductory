#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double r, V;
	
	cout << "Enter the radius: ";
	cin >> r;
	
	V = (4 * M_PI * pow(r, 3)) / 3;
	
	cout << "The volume is: " << V << endl;
	
	
	return 0;
}