//
// Created by user3301 on 4/30/2019.
//
#include <gtest/gtest.h>
#include "../questions/CatsAndMouse.cpp"
class CatsAndMouseTest:public testing::Test {
protected:
    CatsAndMouse catsAndMouse;
};

TEST_F(CatsAndMouseTest, testmethod1) {
    int x = 1, y = 2, z = 3;
    std::string expected = "Cat B";
    auto actual = catsAndMouse.catAndMouse(x,y,z);
    ASSERT_EQ(expected, actual);
}

TEST_F(CatsAndMouseTest, testmethod2) {
    int x = 1, y = 3, z = 2;
    std::string expected = "Mouse C";
    auto actual = catsAndMouse.catAndMouse(x,y,z);
    ASSERT_EQ(expected, actual);
}
