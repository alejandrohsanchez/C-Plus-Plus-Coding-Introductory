#include <iostream>
//#include <string>
#include <fstream>

using namespace std;

void addNew(string names[], string numbers[], int N) {
	int i;
	
	for (i = 0; i < N; i++) {
		if (names[i].empty()) {
			cout << "\nEnter name: ";
			cin >> names[i];
			
			cout << "Enter phone number: ";
			cin >> numbers[i];
			
			cout << "" << endl;
			
			break;
		}
	}
	
}

void dispAll(string names[], string numbers[], int N) {
	int i;
	
	cout << "\nPhonebook Roster\n" << endl;
	
	for (i = 0; i < N; i++) {
		if (!names[i].empty()) {
			cout << names[i] << " - - - - " << numbers[i] << endl;
		}
		
	}
	
	cout << "" << endl;
	
}

void searchName(string names[], string numbers[], int N) {
	string search;
	int i;
	
	cout << "\nEnter their name: ";
	cin >> search;
	
	for (i = 0; i < N; i++) { 
		if (search == names[i]) {
			cout << "Name found!\nTheir number is: " << numbers[i] << "\n" << endl;
			break;
		}
	}
	
	if (i == 10) {
		cout << "Name not found!\n" << endl;
	}
}

void searchNum(string names[], string numbers[], int N) {
	string search;
	int i;
	
	cout << "\nEnter their phone number: ";
	cin >> search;
	
	for (i = 0; i < N; i++) { 
		if (search == numbers[i]) {
			cout << "Number found!\nTheir name is: " << names[i] << "\n" << endl;
			break;
		}
	}
	
	if (i == 10) {
		cout << "Number not found!\n" << endl;
	}
}

int main () {
	int size = 10, loop = 1, choice;
	string names [size];
	string numbers [size];
	
	
	
	while (loop == 1) {
		cout << "| - - - - PHONEBOOK ACCESS - - - - |" << endl;
		cout << " [1] Add New Record" << endl;
		cout << " [2] Display All Records" << endl;
		cout << " [3] Search By Name" << endl;
		cout << " [4] Search By Telephone No." << endl;
		cout << " [5] Exit" << endl;
		cout << "| - - - - - - - ---- - - - - - - - |\n" << endl;
		
		cout << "Choose an option: ";
		cin >> choice;
		
		switch (choice) {
			
			case 1:
			addNew(names, numbers, size);
			break;
			
			case 2:
			dispAll(names, numbers, size);
			break;
			
			case 3:
			searchName(names, numbers, size);
			break;
				
			case 4:
			searchNum(names, numbers, size);
			break;
			
			case 5:
			loop = 0;
			break;
			
			default:
			cout << "Incorrect input\n\n" << endl;
			
		}
		choice = 0;
		
	}
	ofstream fw("Contacts.txt");
	
	if (fw.is_open()) {
		fw << "Contact List" << endl;
		for (int x = 0; x < size; x++) {
			if (!names[x].empty()) {
				fw << names[x] << " - - - - " << numbers[x] << endl;
			}
		}
		fw.close();
	} else {
		cout << "problem";
	}
	
	cout << "\nGood bye" << endl;
	return 0;
}