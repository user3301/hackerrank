#include <gtest/gtest.h>
#include "../questions/SockMerchant.cpp"
//
// Created by user3301 on 2019-04-27.
//
class SockMerchantTest:public testing::Test {
protected:
    SockMerchant sockMerchant;
};

TEST_F(SockMerchantTest, testmethod1) {
    std::vector<int> socks{10, 20, 20, 10, 10, 30, 50, 10, 20};
    int expected = 3;
    int actual = sockMerchant.sockMerchant(9, socks);
    ASSERT_EQ(expected,actual);
}