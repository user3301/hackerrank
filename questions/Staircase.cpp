//
// Created by user3301 on 2019-04-22.
//
#include <iostream>
class solution
{
public:
    void staircase(int n)
    {
        int counter = 0;
        while(counter < n)
        {
            for (int i = 0; i < n - counter -1; ++i) {
                std::cout<< " ";
            }
            for (int j = n-counter; j <=n; ++j) {
                std::cout<< "#";
            }
            std::cout<<std::endl;
            ++counter;
        }
    }
};
