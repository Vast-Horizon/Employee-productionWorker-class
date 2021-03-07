//main
#include <iostream>
#include "Employee.h"
#include "TeamLeader.h"
using namespace std;
int main() {

	Date Dobj("March", 6,2021);
	Employee Eobj("Dave", 1280, Dobj);

	//create two TeamLeader object by using two different constructors
	TeamLeader Tobj0(1,23.7,Eobj,1000,48,44);
	TeamLeader Tobj1("John",1437,Dobj,1, 25.4, 900, 45, 42);

	//test constructors
	cout << "\n-----TeamLeader 1-----\n";
	cout << Tobj0;

	cout << "\n-----TeamLeader 2-----\n";
	cout << Tobj1;

	//test overloaded operators
	cout << "\n------Test overloaded operators------\n";
	TeamLeader Tobj2;
	cin >> Tobj2;
	cout << Tobj2;

	system("pause");
	return 0;
}