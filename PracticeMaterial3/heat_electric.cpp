#include <iostream>
#include <cmath>

using namespace std;

class Heat_Electric {
	public:
		
		int Ts;
		double epsilon;
		double sigma;
		double h;
		int Tinf;
		int Tsur;
		double cost;
};

double calc_Convection() {
	Heat_Electric conv;
	
	conv.h = 4.5;
	conv.Ts = (40 + 273);
	conv.Tinf = (22 + 273);
	
	double heat_flux_conv = conv.h * (conv.Ts - conv.Tinf);
	
	return heat_flux_conv;
}

double calc_Radiation() {
	Heat_Electric rad;
	
	rad.epsilon = 0.92;
	rad.sigma = 5.67 * pow(10, -8);
	rad.Ts = (40 + 273);
	rad.Tsur = (20 + 273);
	
	double heat_flux_rad = rad.epsilon * rad.sigma * (pow(rad.Ts, 4) - pow(rad.Tsur, 4));
	
	return heat_flux_rad;
}

double energy_Consumption(double conv, double rad, double A) {
	double energy = (conv + rad) * A;
	
	return energy;
}

double calc_totalCost(double energy) {
	Heat_Electric electric;
	electric.cost = 0.15;
	
	double Cost = energy * (electric.cost / 1000) * 24;
	
	return Cost;
}

int main() {
	double length = 0.028;
	double width = 0.026;
	double height = 0.026;
	
	double surfaceArea = 2 * ((length * width) + (width * height) + (height * length));
	
	double heatLoss_conv = calc_Convection();
	
	double heatLoss_rad = calc_Radiation();
	
	double energy_consumption = energy_Consumption(heatLoss_conv, heatLoss_rad, surfaceArea);
	
	double Cost = calc_totalCost(energy_consumption);
	
	cout << "The total cost per day is: " << Cost << endl;
	
	return 0;
}