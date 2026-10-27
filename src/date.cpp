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

// check if correct month , day and year combination.
bool Date::isValid(int m, int d, int y) const {
    if (y < 1) return false;
    if (m < 1 || m > 12) return false;
    if (d < 1 || d > daysInMonth(m,y)) return false;
    return true;
}

//====================
// Constructors
//====================

// default constructor: sets date to January 1, 1900
Date::Date(){
    month = 1;
    day = 1;
    year = 1900;
}
//parameter for constructor: validates input before saving
Date::Date (int m, int d, int y) {
    if (isValid(m, d, y)){
        month = m;
        day = d;
        year = y;
    }else{
        //back to default if invalid
        month = 1;
        day = 1;
        year = 1900;
    }
}
//=============
// Getters
//=============

int Date::getMonth() const {
    return month;
}
int Date::getDay() const {
    return day;
}
int Date::getYear() const {
    return year;
}

