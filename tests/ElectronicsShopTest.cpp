//
// Created by user3301 on 2019-04-29.
//
#include <gtest/gtest.h>
#include "../questions/ElectronicsShop.cpp"
class ElectronicsShopTest:public testing::Test {
protected:
    ElectronicsShop electronicsShop;
};

TEST_F(ElectronicsShopTest, testmethod1) {
    std::vector<int> keyboards{3,1};
    std::vector<int> drives{5,2,8};
    int b = 10;
    int expected = 9;
    int actual = electronicsShop.getMoneySpent(keyboards,drives,b);
    ASSERT_EQ(expected,actual);
}

TEST_F(ElectronicsShopTest, testmethod2) {
    std::vector<int> keyboards{4};
    std::vector<int> drives{5};
    int b = 5;
    int expected = -1;
    int actual = electronicsShop.getMoneySpent(keyboards,drives,b);
    ASSERT_EQ(expected,actual);
}
