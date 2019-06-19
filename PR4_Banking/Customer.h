#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>
#include <iostream>

using namespace std;

/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates, 
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer // FIXME: Complete the implementation!
{
protected:
	string name;
	string address;
	int age;
	string telephone_number;
	int customer_number;

public:
	Customer(string name, string address,int age, string tele_num, int cus_num) {
		this->name = name;
		this->address = address;
		this->age = age;
		telephone_number = tele_num;
		customer_number = cus_num;
	}
	string get_name() {
		return this->name;
	}
	string get_address() {
		return address;
	}
	int get_age() {
		return age;
	}
	string get_telephone() {
		return telephone_number;
	}
	int get_customerNumber() {
		return customer_number;
	}
	virtual double get_saving_interest() = 0;
	virtual double get_check_interest() = 0;
	virtual double get_check_charge() = 0;
	virtual double get_overdraft_penalty() = 0;

};


#endif