#include <iostream>

using namespace std;


// i++ means i = i + 1

int main() {
	int i;
	// for-loop
	for (i = 0; i < 10; i++) {
		cout << "Hello" << endl;
		
	}
	
	int x = 5;
	
	// while-loop
	
	/*
	while the condition is true, do the code inside
	*/
	while (x > 0) {
		cout << "x is greater than 0" << endl;
		
		// x-- means x = x - 1
		x--;
	}
	
	int y = 5;
	
	// do/while-loop
	
	/*
	do/while-loop will always do the code first. the while part comes afterwards
	*/
	do {
		cout << "printing y" << endl;
	} while (y < 4);
	
	return 0;
}