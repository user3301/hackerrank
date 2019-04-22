//
// Created by user3301 on 4/22/2019.
//
#include <vector>
#include <iostream>
class solution
{
public:
    void plusMinus(std::vector<int> arr)
    {
        int count = arr.size();
        //positive, negative zero
        std::vector<int> vect(3,0);
        for (int i = 0; i < count; ++i) {
            if(arr[i] > 0) ++vect[0];
            if(arr[i]==0) ++vect[2];
            if(arr[i]<0) ++vect[1];
        }

        for (int j = 0; j < vect.size(); ++j) {
            float ans = (float) vect[j] / (float)count;
            std::cout.setf(std::ios::showpoint); // display trailing zeros eg: 18 display 18.00000
            std::cout<< ans << std::endl;
        }
    }
};
