//
// Created by user3301 on 2019-04-27.
//
#include <vector>
#include <iostream>
class BonAppetit
{
public:
    void bonAppetit(std::vector<int> bill, int k, int b) {
        int shared = 0;
        for (int i = 0; i < bill.size(); ++i) {
            if(i == k) continue;
            shared += bill[i];
        }
        if(shared /2 < b) std::cout << b - shared/2;
        else std::cout << "Bon Appetit";
    }
};
