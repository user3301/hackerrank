//
// Created by user3301 on 8/19/2019.
//
#include <gtest/gtest.h>
#include "../questions/ReverseStringWithoutSpecialCharacters.cpp"
class ReverseStringWithoutSpecialCharactersTest:public testing::Test {
protected:
    ReverseStringWithoutSpecialCharacters reverseStringWithoutSpecialCharacters;
};

TEST_F(ReverseStringWithoutSpecialCharactersTest, testmethod1) {
    string input = "a,b$c";
    string expected = "c,b$a";
    string actual = reverseStringWithoutSpecialCharacters.reverse(input);
    ASSERT_EQ(expected,actual);
}
