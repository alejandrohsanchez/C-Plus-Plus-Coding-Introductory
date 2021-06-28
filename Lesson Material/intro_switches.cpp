#include <iostream>

using namespace std;

int main() {
	cout << "This program can do different things. 1 for printing lines or 2 for printing numbers." << endl;
	int x;
	cin >> x;
	
	switch (x) {
		
		case 1:
		cout << "Printing lines start now:" << endl;
		cout << "- - - - - - - - - - - - - -" << endl;
		cout << "- - - - - - - - - - - - - -" << endl;
		
		break;
		
		case 2:
		cout << "Printing numbers starts now:" << endl;
		cout << "1 2 3 4 5 6 7 8 9 10" << endl;
		cout << "11 12 13 14 15 16 17 18 19 20" << endl;
		break;
		
		default:
		cout << "You didn't enter a 1 or a 2, but it will still work!" << endl;
		cout << "Surprise!" << endl;
		
	}
	
	
}