#include <iostream>

int main() {

	//Initialize variables
	double tempf;
	double tempc;

	// Ask the user for current temperature
	std::cout << "Enter the temperature in Fahrenheit:";
	std::cin >> tempf;

	//Covert Fahrenheit to Celsius
	tempc = (tempf - 32) / 1.8;

	//Output temperature in Celsius
	std::cout << "The temp is " << tempc << " degrees Celsius.\n";

}