#include <iostream>

using namespace std;

int main() {
	double C, F;
	
	cout << "Please enter degrees Celsius: ";
	cin >> C;
	
	F = (1.8 * C) + 32;
	
	cout << "Degrees Fahrenheit is: " << F << endl;
	
	return 0;
}