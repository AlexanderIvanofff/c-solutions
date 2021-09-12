#include <iostream>

using namespace std;

int main() {
	cout << "Hello welcome to Alex's Carpet Cleaning Servece" << endl;
	cout << "\nHow many rooms would you like to cleanted? ";

	int number_of_rooms{ 0 };
	cin >> number_of_rooms;

	const double price_per_room{ 30.0 };
	const double sales_tax{ 0.06 };
	const int estimate_expiry{ 30 }; // days

	double result = number_of_rooms * price_per_room;

	cout << "\nEstimate for carpet cleanning servece" << endl;
	cout << "\nPrice per room: $" << price_per_room << endl;
	cout << "\nNumber of room: " << number_of_rooms << endl;
	cout << "\nPrice per room: $" << number_of_rooms * price_per_room << endl;

	cout << "Tax: $" << result * sales_tax << endl;
	cout << "================================" << endl;
	cout << "Total estimate: $" << (result)+(result * sales_tax) << endl;
	cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

	return 0;

}