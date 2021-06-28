#include <iostream>

using namespace std;

class helloClass {
	public:
		
		// These are attributes
		int num;
		string myString;
};




int main() {
	/*
	ClassName  ObjectName
	*/
	helloClass hello;
	
	// Accessing attributes
	hello.num = 5;
	hello.myString = "Hello World";
	
	cout << hello.num << endl;
	cout << hello.myString << endl;
	
	
	
	return 0;
}