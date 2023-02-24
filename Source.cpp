#include <iostream>
#include "Investment.h"

using namespace std;

int main() {

	while (1) {

		//Outputting categories
		cout << "Data Input" << endl;
		cout << endl;
		cout << "Initial Investment Amount:" << endl;
		cout << "Monthly Deposit:" << endl;
		cout << "Annual Interest:" << endl;
		cout << "Number of Years:" << endl;
		cout << endl;
		cout << "Press Any Key To Continue... ";
		cout << endl;

		//Getting user input
		cout << "Data Input" << endl;
		cout << endl;
		cout << "Initial Investment Amount: $";
		double initDeposit = 0.00;
		double monDeposit = 0.00;
		double intRate = 0.00;
		int numYears;
		cin >> initDeposit;
		cout << "Monthly Deposit: $";
		cin >> monDeposit;
		cout << "Annual Interest: %";
		cin >> intRate;
		cout << "Number of Years: ";
		cin >> numYears;
		cout << endl;
		cout << "Press Any Key To Continue" << endl;
		cout << endl;

		//Creating Investment with the input given to us from the user
		Investment myInvestment = Investment(initDeposit, monDeposit, intRate, numYears);
		cout << endl;

		//Report methods
		myInvestment.noExtraDeposits();
		cout << endl;

		if (monDeposit > 0) {
			myInvestment.withExtraDeposits();

		}
		cout << endl;

		//Asking the user if they want to try again
		cout << "Would you like to try a different amount?  (y/n): " << endl;
		string option;
		cin >> option;
		if (option != "y") {
			break;

		}
		cout << endl;


	}

	return 0;
}