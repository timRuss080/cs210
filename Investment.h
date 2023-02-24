#pragma once
#ifndef INVESTMENT_H_
#define INVESTMENT_H_

class Investment {

    public:
	    Investment(double firstDeposit, double monthlyDeposit, double interestRate, int years);
	    void noExtraDeposits();
	    void withExtraDeposits();

    private:
	    double initDeposit;
	    double monDeposit;
	    double intRate;
	    int numYears;

};
#endif

