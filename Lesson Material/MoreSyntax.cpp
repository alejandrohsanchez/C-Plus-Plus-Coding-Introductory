#include <iostream>

using namespace std;

int main () {
	
	// Initializing more than one variable on one line
	int x, y, z;
	
	// Initializing double variables
	double t, p;
	cin >> t;
	cin >> p;
	
	cout << "You entered: " << t << ", "<< p << endl;
	
	// Initializing string variables
	string myStr1, myStr2;
	
	cin >> myStr1;
	cin >> myStr2;
	cout << "You entered: " << myStr1 << endl;
	
	// \n creates a new line, has to be in ""
	// Using two "\n" creates 2 new lines
	cout << "This is one line\n\n" << endl;
	cout << "This is another line" << endl;
	
	
	
	return 0;
}