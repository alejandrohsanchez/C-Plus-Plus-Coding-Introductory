#include <iostream>

using namespace std;

// void means that the function does not return a value
void printHello() {
	cout << "Printing from another function" << endl;
}

// int means that the function returns an int data type
int return3() {
	return 3;
}

int main() {
	cout << "Printing from main" << endl;
	
	// Initialize variable called x as integer (int data type)
	int x;
	
	// x is equal to the value that the return3 function returns
	x = return3();
	
	// cout means output (print)
	// endl means end line (creates a new line after printing)
	cout << x << endl;
	
	printHello();
	
	int num;
	cin >> num;
	
	cout << "You entered " << num << endl;
	
	if (num > 10) {
		cout << "You entered a number greater than 10" << endl;
	
	} else if (num == 10) {
		cout << "You entered a number equal to 10" << endl;
	
	} else {
		cout << "You entered a number less than 10" << endl;
	}
	
	// Always include return 0 (or 1) at the end of main
	return 0;
}