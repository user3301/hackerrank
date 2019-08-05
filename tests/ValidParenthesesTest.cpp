#include <gtest/gtest.h>
#include "../questions/ValidParentheses.cpp"
//
// Created by user3301 on 8/5/2019.
//
class ValidParenthesesTest:public testing::Test {
protected:
    ValidParentheses validParentheses;
};

TEST_F(ValidParenthesesTest, testmethod1) {
    std::string input = "()";
    bool expected = true;
    bool actual = validParentheses.isValid(input);
    ASSERT_EQ(expected,actual);
}
