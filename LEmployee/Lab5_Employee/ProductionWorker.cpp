#include "ProductionWorker.h"
ProductionWorker::ProductionWorker(int s, double h, Employee e):Employee(e) {
	shift = s; hourlyRate = h; 
}

ProductionWorker::ProductionWorker(int s, double h, std::string name, int num, Date d):Employee(name,num,d) {
	shift = s; hourlyRate = h;
}