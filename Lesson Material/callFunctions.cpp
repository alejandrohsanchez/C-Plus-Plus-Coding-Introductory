#include <iostream>

using namespace std;

// void means that the function does not return anything at all. It is still available for doing things.
void function1() {
	cout << "Printing from a void function" << endl;
}

// we can create functions with the same name. However, their only difference is that they take in a different number of arguments.
void function1(int x) {
	cout << x << endl;
}

// This function is still different because it takes in a different data type as an argument.
void function1(string x) {
	cout << x << endl;
}

// This function returns a boolean data type. In this example, the function returns false.
bool function1(bool pass) {
	pass = false;
	
	return pass;
}

// This function takes in an array as an argument. In this example, the function prints out every value in the array.
void function1(int arr1[]) {
	int i;
	
	for (i = 0; i < 5; i++) {
		cout << arr1[i] << endl;
	}
}


int main() {
	
	int a = 2;
	string b = "This is a string";
	
	// Note, pass is an arbitrary variable.
	bool pass = true;
	
	// This calls the void function "function1".
	function1();
	
	// Call function1 with an int.
	function1(a);
	
	// Call function1 with a string.
	function1(b);
	
	cout << pass << endl;
	// Call function1 with a boolean. pass is equal to whatever function1 returns.
	pass = function1(pass);
	cout << pass << endl;
	
	int arr1 [5] = {1, 2, 3, 4 ,5};
	// Call function1 with an array. arr1 is an array that is fully defined.
	function1(arr1);
	
	return 0;
}