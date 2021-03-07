#include "TeamLeader.h"
TeamLeader::TeamLeader(double b, int r, int a) {

	bonus = b; requiredH = r; attendedH = a;

}

//(Date obj, pay-rate, bonus, requiredH, attendedH)
TeamLeader::TeamLeader(int s, double p, Employee e, double b, int r, int a):ProductionWorker(s, p, e) {

	bonus = b; requiredH = r; attendedH = a;
	
}

//(month, day, year, shift, pay-rate, bonus, requiredH, attendedH)
TeamLeader::TeamLeader(std::string name, int num, Date d, int s, double p, double b, int r, int a):ProductionWorker(s,p,name,num,d) {

	bonus = b; requiredH = r; attendedH = a;
}

// overloaded extraction operator
std::ostream& operator <<(std::ostream& out, TeamLeader& t) {
	out << "\n***Display***\n\n";

	out << "Employee Name: " << t.eName 
		<< "\nEmployee Number: " << t.eNumber 
		<< "\nHire Date: " << t.eDate.getDate() << endl;

	out << std::endl;
	out << "Shift (day shift for 1, night shift for 2) " << t.shift << endl;;
	out << "Hourly pay rate: " << t.hourlyRate << endl;
	out << "Bonus amount: " << t.bonus << endl;
	out << "Required hours: " << t.requiredH << endl;
	out << "Attended hours: " << t.attendedH << endl;

	out << std::endl;

	return out;
}
// overloaded insertion operator
std::istream& operator >>(std::istream& in, TeamLeader& t) {
	std::string month;
	int day, year;

	std::cout << "Employee Name: "; in >> t.eName;
	std::cout << "Employee Number: "; in >> t.eNumber;
	std::cout << "Hire Month,Day, and Year(ex: May/6/2025): ";
	in >> month >> day >> year;
	t.eDate = Date(month, day, year);
	std::cout << "Enter the shift:"; in >> t.shift;
	std::cout << "Enter the hourly pay rate:"; in >> t.hourlyRate;
	std::cout << "Enter the bonus amount:"; in >> t.bonus;
	std::cout << "Enter the Required hours:"; in >> t.requiredH;
	std::cout << "Enter the numbers of hours attended:"; in >> t.attendedH;

	return in;
}