//This program calculates the batting average given the number of hits the player has gotten and how many times they have been up to bat
#include <iostream>
#include <iomanip>

int main()
{
	float numberofTimesAtBat;
	float numberofHitsGotten;
	float battingAverage;

	std::cout << "Welcome to the batting average calculator!\n";
	std::cout << "Please enter the number of times the player has gone up to bat: ";
	std::cin >> numberofTimesAtBat;
	std::cout << "Please enter the number of times the player has gotten a hit  : ";
	std::cin >> numberofHitsGotten;

	battingAverage = numberofHitsGotten / numberofTimesAtBat;

	//Formatted output to 4 decimal precision.
	std::cout << "The batting average of the player is: " << std::fixed << std::setprecision(4) << battingAverage << std::endl;

	return 0;
}