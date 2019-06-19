#ifndef ADULT_H_
#define ADULT_H_
#include <string>
#include <iostream>
#include "Customer.h"

using namespace std;

class Adult : public Customer {
private:
	double SAVINGS_INTEREST;
	double CHECK_INTEREST;
	double CHECK_CHARGE;
	double OVERDRAFT_PENALTY;
public:
	Adult(string name, string address, int age, string tele_num, int cus_num) : Customer(name, address, age, tele_num, cus_num) {
		SAVINGS_INTEREST = 1.5;
		CHECK_INTEREST = 1;
		CHECK_CHARGE = 5;
		OVERDRAFT_PENALTY = 50;
	}
	double get_saving_interest() {
		return SAVINGS_INTEREST;
	}
	double get_check_interest() {
		return CHECK_INTEREST;
	}
	double get_check_charge() {
		return CHECK_CHARGE;
	}
	double get_overdraft_penalty() {
		return OVERDRAFT_PENALTY;
	}
};

#endif