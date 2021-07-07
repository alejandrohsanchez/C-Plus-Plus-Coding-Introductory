#include <iostream>
#include <cmath>

using namespace std;

class volCube {
	public:
		int length;
		int width;
		int height;
		int volume;
	
	
};

class volCone {
	public:
		double radius;
		double height;
		double volume;
	
};


int calcVolCube() {
	int V;
	volCube vol_1;
	
	vol_1.length = 5;
	vol_1.width = 3;
	vol_1.height = 2;
	vol_1.volume = (vol_1.length * vol_1.width * vol_1.height);
	
	V = vol_1.volume;
	
	return V;
}

int calcVolCone() {
	int V;
	volCone vol_2;
	
	vol_2.radius = 7;
	vol_2.height = 5;
	vol_2.volume = 3.14 * pow(vol_2.radius, 2) * (vol_2.height / 3);
	
	V = vol_2.volume;
	
	return V;
}


int main() {
	int volume_cube;
	int volume_cone;
	
	volume_cube = calcVolCube();
	volume_cone = calcVolCone();
	
	cout << "The volume of the cube is: " << volume_cube << endl;
	cout << "The volume of the cone is: " << volume_cone << endl;
	
	return 0;
}