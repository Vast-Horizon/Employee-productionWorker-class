#include "Date.h"

Date::Date(std::string m, int d, int y) {

	month = m; day = d; year = y;
	
}

std::string Date::getDate()const {

	return month + "/" + std::to_string(day) + "/" + std::to_string(year);

}