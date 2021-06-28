#include <iostream>

using namespace std;

int main() {
	int d, m, v0, vf, Fg, a, Fnet, FT;
	double g = 9.81;
	
	cout << "Enter the mass of the weight (kg): ";
	cin >> m;
	
	cout << "Enter the final velocity of the weight (m/s): ";
	cin >> vf;
	
	cout << "Enter the length of travel (m): ";
	cin >> d;
	
	Fg = m * g;
	
	a = ((vf * vf) - (v0 * v0)) / (2 * d);
	
	Fnet = m * a;
	
	FT = m * (a + g);
	
	cout << "\nCalculating...\nMass of the weight (kg): " << m << "\nFinal velocity (m/s): " << vf << "\nLength of travel (m): " << d << "\nAcceleration (m/s^2): " << a << "\nNet force (N): " << Fnet << endl;
	
	cout << "\nThe tension in the rope is: " << FT << endl;
	
	return 0;
}