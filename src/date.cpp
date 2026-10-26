#include "Date.h"
#include <sstream>
#include <iomanip>

//===========================
// Private Helper Functions
//===========================

// Leap year validation
bool Date::isLeapYear(int y) const {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);

}

// Returns the # of days in their month and year. 
int Date::daysInMonth(int m, int y) const {
    //30 day months
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        return 30;
    }
    // Feb if leap year or not
    else if (m == 2) {
        if (isLeapYear(y)){

        return 29;
    } else {
        return 28;
    }
    }
      else {
        return 31;
    }
}

