#include <iostream>
#include "Date.h"

int main(){
    //normal and default cases
    Date d1;
    Date d2(5, 12, 20026);
    std::cout << "Default: " << d1.toLongString() << "\n";
    std::cout << "custom: " << d2.toLongString() << " (" << d2.toISOString() << ")\n\n";

    // Leap Year
    Date leap (2, 29, 2024); // valid leap day
    Date nonLeap (2, 29, 2023); //invalid leap day
    std::cout << "Leap Day 2024 (Valid):      "<< leap.toNumericString() << "\n";
    std::cout << "Non-Leap 2023 (Fallback):   "<< nonLeap.toNumericString() << "\n\n";

    // invalid case
    Date badMonth (13, 10,2025); // no month 13, invalid.
    Date badDay (4, 31, 2025); // no 31 days in April
    std::cout << "Bad Month Fallback:  " << badMonth.toNumericString()<< "\n";
    std::cout << "Bad Day Fallback:   " << badDay.toNumericString() << "\n\n";

    // setters testing
    Date d3;
    d3.setDate(12, 25, 2025);
    std::cout << "After Setter:  " << d3.toNumericString() << "\n";
    return 0;
}