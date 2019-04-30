//
// Created by user3301 on 4/30/2019.
//
#include <string>
#include <algorithm>
class CatsAndMouse {
public:
    std::string catAndMouse(int x, int y, int z) {
        int xdist = abs(z - x);
        int ydist = abs(z - y);
        if(xdist == ydist) return "Mouse C";
        if(xdist > ydist) return "Cat B";
        else return "Cat A";
    }
};
