//
// Created by user3301 on 2019-04-28.
//
#include <string>
class CountingValleys {
public:
    int countingValleys(int n, std::string s) {
        int valleys = 0;
        int lat = 0;
        for (int i = 0; i < s.size(); ++i) {
            int prelat = lat;
            if(s[i] == 'U') ++lat;
            else --lat;
            if(lat ==0 && prelat < 0) ++valleys;
        }
        return valleys;
    }
};
