#include <iostream>

using namespace std;

class Car {
	public:
		string brand;
		string model;
		int year;
	
	
};



int main() {
	Car car1;
	car1.brand = "Nissan";
	car1.model = "R32";
	car1.year = 1981;
	
	Car car2;
	car2.brand = "Datsun";
	car2.model = "240z";
	car2.year = 1990;
	
	cout << car1.brand << " " << car1.model << " " << car1.year << endl;
	cout << car2.brand << " " << car2.model << " " << car2.year << endl;
	
	return 0;
}