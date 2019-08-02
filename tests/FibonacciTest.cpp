#include <gtest/gtest.h>
#include "../questions/Fibonacci.cpp"
//
// Created by user3301 on 8/2/2019.
//
class FibonacciTest:public testing::Test {
protected:
    Fibonacci fibonacci;
};

TEST_F(FibonacciTest, testmethod1) {
    int n = 5;
    int actual = fibonacci.fib(n);
    int expected = 3;
    ASSERT_EQ(expected,actual);
}

TEST_F(FibonacciTest, testmethod2) {
    int n = 12;
    int actual = fibonacci.fib(n);
    int expected = 89;
    ASSERT_EQ(expected,actual);
}
