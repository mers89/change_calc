#include <iostream>
#include <string>
#include "my_change_calculator.h"

using namespace std;
int main() {
	string cont = "y";
	double cash = 0, purchase = 0;

	while(cont != "n"){
		//input
		cout << "Enter total bill: ";
		cin >> purchase;
		cout << "Enter cash amount you provide: ";
		cin >> cash;

		//output
		string output = calculateChange(purchase, cash);
		cout << output;

		//loop
		cout << "Continue (y/n)? ";
		cin >> cont; 
	}
	return 0;
}
