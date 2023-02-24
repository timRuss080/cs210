#include "Investment.h"
#include <iostream>
#include <iomanip>

using namespace std;

//Constructor with parameters
Investment::Investment(double firstDeposit, double monthlyDeposit, double interestRate, int years) {
	this->initDeposit = firstDeposit;
	this->monDeposit = monthlyDeposit;
	this->intRate = interestRate;
	this->numYears = years;

}

//Showing report without additional monthly deposits
void Investment::noExtraDeposits() {
	//Outputting the title
	cout << "Balance and Interest Without Additional Monthly Deposits" << endl;
	cout << endl;
	//Outputting the table
	cout << setw(5) << "Year" << setw(30) << "Year End Balance" << setw(40) << "Year End Earned Interest" << endl;
	cout << endl;

	//Calculating earned interest for each year
	int thisYear = 1;
	double endBalance = this->initDeposit;
	while (thisYear <= this->numYears) {
		double earnedInterest = endBalance * this->intRate / 100;
		endBalance += earnedInterest;
		cout << right << setw(5) << thisYear << fixed << setprecision(2) << setw(30) << endBalance << setw(40) << earnedInterest << endl;
		cout << endl;
		thisYear++;

	}

}

//Showing the report with additional monthly deposits
void Investment::withExtraDeposits() {
	cout << "Balance and Interest With Aditional Monthly Deposits" << endl;
	cout << endl;

	//Outputting the table
	cout << setw(5) << "Year" << setw(30) << "Year End Balance" << setw(40) << "Year End Earned Interest" << endl;
	cout << endl;

	//Calculating interest considering monthly deposits
	int thisYear = 1;
	double endBalance = this->initDeposit;
	while (thisYear <= this->numYears) {
		int currMonth = 1;
		double earnedInterest = 0.0;
		double monthBalance = endBalance;

		while (currMonth <= 12) {
			//Adding the deposit made for the month
			monthBalance += this->monDeposit;
			//Formula for monthly interest
			double monthInterest = monthBalance * this->intRate / (100 * 12);
			earnedInterest += monthInterest;
			monthBalance += monthInterest;
			currMonth++;


		}
		//Once we pass 12 months
		endBalance = monthBalance;
		cout << right << setw(5) << thisYear << fixed << setprecision(2) << setw(30) << endBalance << setw(40) << earnedInterest << endl;
		cout << endl;
		thisYear++;
	}
}
