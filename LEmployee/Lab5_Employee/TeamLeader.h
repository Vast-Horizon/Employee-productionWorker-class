#ifndef TEAMLEADER
#define TEAMLEADER
#include "ProductionWorker.h"
class TeamLeader:public ProductionWorker
{
private:
	double bonus;
	int requiredH, attendedH;
public:
	TeamLeader() { bonus = 0.00; requiredH = 0; attendedH = 0; }
	TeamLeader(double, int, int);
	        //( shift pay-rate,employee obj, bonus, requiredH, attendedH)
	TeamLeader(int, double, Employee,double, int, int);
	        //(name,number,date, shift, pay-rate, bonus, requiredH, attendedH)
	TeamLeader(std::string,int, Date,int, double, double, int, int);

	void setBouns(double b) { bonus = b; }
	void setReuiredH(int r) { requiredH = r; }
	void setAttendedH(int h) { attendedH = h; }

	double getBouns()const { return bonus; }
	int getrequiedH()const {return requiredH;}
	int getAttendedH()const { return attendedH; }

	friend std::ostream& operator <<(std::ostream&, TeamLeader&);
	friend std::istream& operator >>(std::istream&, TeamLeader&);

	~TeamLeader() {};

};

#endif