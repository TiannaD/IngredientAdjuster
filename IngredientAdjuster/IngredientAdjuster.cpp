#include <iostream>
using namespace std;

//This program calculated amount of ingredients based on user input and base recipe.

double desiredCookies;

double const cupsOfSugar = 1.5;
double const cupsOfButter = 1.0;
double const cupsOfFlour = 2.75;

int main() {

	cout << "How many cookies would you like?" << endl;

	cin >> desiredCookies;

	double multiplier = desiredCookies / 48;
	double sugarNeeded = cupsOfSugar * multiplier;
	double butterNeeded = cupsOfButter * multiplier;
	double flourNeeded = cupsOfFlour * multiplier;

	cout << "For " << desiredCookies << " cookies, you'll need: " << endl;
	cout << sugarNeeded << " cups of sugar" << endl << butterNeeded << " cups of butter" << endl << flourNeeded << " cups of flour" << endl;

	return 0;
}