#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>
class Date
{
private:
	std::string month;
	int day, year;
public:
	Date() {std::string month = ""; day = year = 0;}
	Date(std::string, int, int);

	void setMonth(std::string m) { month = m; }
	void setDays(int d) { day = d; }
	void setYear(int y) { year = y; }

    std::string getMonth()const { return month; }
	std::string getDate()const;
	int getYear()const { return year; }

};
#endif
