//
// Created by user3301 on 2019-04-22.
//
#include <string>
#include <iostream>
class solution
{
public:
    std::string timeConversion(std::string s)
    {
        //00:00:00AM
        std::string  e = s.substr(8);
        bool isAM = e == "AM";
        if(isAM)
        {
            int n = std::stoi(s.substr(0,2));
            if(n == 12)
            {
                std::string ans = s.replace(0,2, "00");
                return ans.substr(0,8);
            }

            return s.substr(0,8);
        }
        else
        {
            int n = std::stoi(s.substr(0,2));
            std::string newn = std::to_string(12 + n%12);
            auto ans = s.replace(0,2, newn).substr(0,8);
            return ans;
        }
    }
};
