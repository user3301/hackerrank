//
// Created by user3301 on 2019-05-03.
//
#include <gtest/gtest.h>
#include "../questions/BeautifulDaysAtTheMovies.cpp"
class BeautifulDaysAtTheMoviesTest:public testing::Test {
protected:
    BeautifulDaysAtTheMovies beautifulDaysAtTheMovies;
};

TEST_F(BeautifulDaysAtTheMoviesTest, testmethod1) {
    int i = 20, j = 23, k= 6;
    int expected = 2;
    int actual = beautifulDaysAtTheMovies.beautifulDays(i,j, k);
    ASSERT_EQ(expected, actual);
}
