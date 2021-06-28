#include <iostream>

using namespace std;

int main() {
	int myArray[5] = {1, 2, 3, 4, 5};
	
	int i;
	for (i = 4; i >= 0; i--) {
		cout << myArray[i] << endl;
	}
	
	int array2[4] = {6, 3, 1, 6}
	for (i = 3; i >= 0; i--) {
		cout << array2[i] << endl;
	}
	
	return 0;
}