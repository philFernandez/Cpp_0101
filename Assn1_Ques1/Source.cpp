#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
	// Sets all decimal numbers to be rounded to two decimals
	std::cout << std::setprecision(2) << std::fixed;
	
	// Named constants for tip and tax rates.
	const double TIP_PERCENTAGE = 0.20;
	const double TAX_PERCENTAGE = 0.105;

	double restaurantBill = 38.40,
		tax = restaurantBill * TAX_PERCENTAGE,
		subTotal = restaurantBill + tax,
		tip = subTotal * TIP_PERCENTAGE,
		total = subTotal + tip;

	cout << "Bill           $   " << restaurantBill << "\n";
	cout << "Tax at 10.5%   $   " << tax << "\n";
	cout << "Sub-total      $   " << subTotal << "\n";
	cout << "Tip at 20%     $   " << tip << "\n";
	cout << "Total Bill     $   " << total << "\n";;
	// Lets say that I ad some things here. Lets check out the functionality of git
	// in Visual Studio!

	return 0;
}