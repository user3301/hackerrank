#include <gtest/gtest.h>
#include "../questions/BonAppetit.cpp"
//
// Created by user3301 on 2019-04-27.
//
class BonAppetitTest:public testing::Test {
protected:
    BonAppetit bonAppetit;
};

TEST_F(BonAppetitTest, testmethod1) {
    std::vector<int> input{3,10,2,9};
    int k = 1;
    int b = 12;
    bonAppetit.bonAppetit(input, k,b);
    //expected console output "5"
}
