//
// Created by user3301 on 2019-04-22.
//

#include <gtest/gtest.h>
#include <vector>
#include "../questions/MinMaxSum.cpp"
class MinMasSumTest: public testing::Test
{
protected:
    solution solution;
};

TEST_F(MinMasSumTest, testmethod)
{
    std::vector<int> input{1,2,3,4,5};
    solution.miniMaxSum(input);
    std::vector<int> input2{396285104, 573261094, 759641832, 819230764, 364801279}; // test if integer overflows
    solution.miniMaxSum(input2);
}