#include <iostream>

using namespace std;

int main() {
	
	cout << "Hello. We offer 3 different types of vehicles..." << endl;
	
	cout << "Economy: $35 per day | Compact: $45 per day | Standard: $95 per day" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "" << endl;
	
	int total, days, car, extra;
	
	cout << "Please choose the rental car (1 for Economy, 2 for Compact, 3 for Standard): ";
	cin >> car;
	
	cout << "Please enter the number of rental days: ";
	cin >> days;
	
	cout << "Are you a club member? (1 for yes, 0 for no): ";
	cin >> extra;
	cout << "" << endl;
	
	if (car == 1) {
		total = (35 * days);
	} else if (car == 2) {
		total = (45 * days);
	} else {
		total = (95 * days);
	}
	
	cout << "Your base cost is: " << total << endl;
	cout << "" << endl;
	
	if (extra == 1) {
		total = total - (total * 0.15);
	}
	
	cout << "Your total estimate after discounts is: " << total << endl;
	
	return 0;
}