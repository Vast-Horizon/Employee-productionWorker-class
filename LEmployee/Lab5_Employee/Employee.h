#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include "Date.h"
using namespace std;

class Employee
{
protected:
	std::string eName;
	int eNumber;
	Date eDate;

public:
	Employee() { eName = ""; eNumber = 0; eDate = Date(); }
	Employee(std::string, int, Date);
	
	Employee(const Employee&);//copy constructor

	void setDate(Date na) { eDate = na; }
	void setName(std::string n) { eName = n; }
	void setNumber(int nmb) { eNumber = nmb; }

	Date getDate()const { return eDate; }
	std::string getName()const { return eName; }
	int getNumber()const { return eNumber; }

	~Employee() {}
};

#endif