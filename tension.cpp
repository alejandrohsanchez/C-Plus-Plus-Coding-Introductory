#include <iostream>
#include <cmath>

using namespace std;

int main() {
double g = 9.81;
int d, v0, vf, m, fg, a, fnet, ft;


	cout << "Enter the mass of the weight(kg): ";
	
	cin >> m;
	
	cout << "Enter the final velocity of the weight (m/s): ";
	
	cin >> vf;
	
	cout << "Enter the length of travel (m): "; 
	
	cin >> d; 

fg = m * g;
a = ((pow(vf,2) - pow(v0,2)) / (2 * d));
fnet = (m) * (a);
ft = m * (a + g);

	cout << "Calculating..." << endl; 
	
	cout << "Mass of the weight (kg): " << m << endl; 
	
	cout << "Final velocity (m/s): " << vf << endl;
	
	cout << "Length of travel (m): " << d << endl; 
	
	cout << "Acceleration (m/s^2): " << a << endl;
	
	cout << "Net force (N): " << fnet << endl;
	
	cout << "\nThe tension in the rope is: " << ft << endl;

	return 0;
}