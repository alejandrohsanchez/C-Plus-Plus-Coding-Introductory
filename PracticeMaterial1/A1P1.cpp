#include <iostream>

using namespace std;

int main() {
	int loop = 1;
	int num = 0;
	int total = 0;
	int counter = 0;
	int average = 0;
	
	while (loop == 1) {
		cout << "Please enter a number: ";
		cin >> num;
		
		total = total + num;
		counter++;
		
		cout << "Continue? (1 for yes, 0 for no): ";
		cin >> loop;
		
		if (loop == 0) {
			break;
		} else {
			loop = 1;
		}
	}
	
	average = total / counter;
	cout << "Your average is " << average << endl;
	
	return 0;
}