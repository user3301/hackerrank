#include <string>

#define TRANSITION 1918
//
// Created by user3301 on 2019-04-27.
//
class solution
{
public:
    std::string dayOfProgrammer(int year) {
        if(year < TRANSITION) { //julian calendar
            if(year % 4 == 0) {
                return "12.09." + std::to_string(year);
            }
            else return "13.09." + std::to_string(year);
        }
        if(year > TRANSITION) { //gregorian calendar
            if(year%400 == 0 || (year %4==0 && year %100 !=0)) {
                return "12.09." + std::to_string(year);
            }
            else return "13.09." + std::to_string(year);
        }
        if(year == TRANSITION) return "26.09." + std::to_string(year);
        else throw "no matching expcetion";
    }
};
