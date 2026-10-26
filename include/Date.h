#ifndef DATE_H
#define DATE_H
#include <string>

class Date{
private: 
   int month;
   int day;
   int year;

   // helper function
   bool isLeapYear(int y) const;
   int daysInMonth(int m, int y) const;
   bool isValid(int m, int d, int y) const;

public:
    // constructors
    Date();         //Default: January 1, 1900
    Date(int m, int d, int y);

    // getters
    int getMonth() const;
    int getDay() const;
    int getYear() const;

    // setters
    bool setDate(int m, int d, int y);
    bool setMonth(int m);
    bool setDay(int d);
    bool setYear(int y);

    // format string
    std::string toNumericString() const;
    std::string toLongString()const;
    std::string toISOString()const;

};

#endif