//
// Created by user3301 on 2019-05-02.
//
#include <gtest/gtest.h>
#include "../questions/AngryProfessor.cpp"
class AngryProfessorTest:public testing::Test {
protected:
    AngryProfessor angryProfessor;
};

TEST_F(AngryProfessorTest, testmethod1) {
    std::vector<int> a{-1, -4, 3,2};
    int k = 3;
    std::string expected = "YES";
    auto actual = angryProfessor.angryProfessor(k, a);
    ASSERT_EQ(expected, actual);
}
