#include "Employee.h"
Employee::Employee(string name, int num, Date dt) {

	eName = name; eNumber = num; eDate = dt;

}
Employee::Employee(const Employee& e) {

	eName = e.eName; eNumber = e.eNumber; eDate = e.eDate;

}