#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"
class ProductionWorker:public Employee
{
protected:
	int shift;
	double hourlyRate;
	Employee e;
public:
	ProductionWorker() { shift = 0; hourlyRate = 0.00, e = Employee(); }
	ProductionWorker(int, double, Employee);
	ProductionWorker(int, double, std::string, int, Date);

	void setShift(int s) { shift = s; }
	double setHourly(int h) { hourlyRate = h; }
	
	int getShift()const { return shift; }
	double getHourly()const { return hourlyRate; }

};
#endif
