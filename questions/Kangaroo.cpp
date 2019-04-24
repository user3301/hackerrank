//
// Created by user3301 on 4/24/2019.
//
#include <string>
#include <math.h>
class solution
{
public:
    std::string kangaroo(int x1, int v1, int x2, int v2)
    {
        float f = (float)(x2-x1)/(float)(v1-v2);
        if(x1!=x2 && v1==v2) return "NO";
        if(floor(f) == ceil(f) && f >=0) return "YES";
        else return "NO";
    }
};
