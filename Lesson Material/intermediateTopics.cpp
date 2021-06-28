#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	// Creating int array
	int numArray [5] = {1, 2, 3, 4, 5};
	
	// Printing out every value
	int i;
	for (i = 0; i < 5; i++) {
		cout << numArray[i] << endl;
	}
	
	/////////////////////////////////////
	// Using booleans and "!" operator
	/////////////////////////////////////
	
	
	// This is a boolean data type
	bool firstBool = true;	
	
	// If statement will only run if conditional inside is true.
	if (firstBool) {
		cout << "firstBool is true!" << endl;
	} else if (firstBool == false) {
		cout << "firstBool is false!" << endl;
	}
	
	// "!" means "NOT". "!=" means "NOT EQUAL TO"
	int x = 2;
	if (x != 2) {
		cout << "x is not equal to 2" << endl;
		
	} else if (x == 2) {
		cout << "x is equal to 2" << endl;
		
	}
	
	int y;
	
	////////////////////////////
	// Writing to a text file
	////////////////////////////
	
	// ofstream will create a file name "arrayNum.txt". myFile is referenced to from here on out.
	ofstream myFile("arrayNum.txt");
	
	// if arrayNum.txt can be opened, myFile.is_open is true.
	if (myFile.is_open()) {
		
		// Now we can begin writing our contents to the new txt file.
		myFile << "Array Contents" << endl;
		
		for (y = 0; y < 5; y++) {
			myFile << numArray[y] << endl;
		}
		
		// We must always close the file after writing to it.
		myFile.close();
	} else {
		cout << "Cannot open file" << endl;
		
	}
	
	/////////////////////////
	// Using .empty
	/////////////////////////
	
	
	// Creates a string array of size 4.
	string arrString [4];
	arrString[1] = "Index 1";
	
	// This will produce no error
	/*
	cout << arrString[0] << endl;
	string t = arrString[0];
	*/
	
	// Since arrString[0] has no value, the if condition is true.
	if (arrString[0].empty()) {
		cout << "arrString[0] is empty!" << endl;
	}
	
	// We put a value in arrString at index 0.
	arrString[0] = "penguinos";
	
	// Since arrString[0] now has a value, the if condition is false (it is now NOT empty)
	if (arrString[0].empty()) {
		cout << "arrString[0] is empty!" << endl;
	}
	
	
	return 0;
}