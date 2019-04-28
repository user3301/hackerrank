//
// Created by user3301 on 2019-04-28.
//
#include <gtest/gtest.h>
#include "../questions/DrawingBook.cpp"
class DrawingBookTest:public testing::Test {
protected:
    DrawingBook drawingBook;
};

TEST_F(DrawingBookTest, testmethod1) {
    int n  = 6;
    int p = 2;
    int expected = 1;
    int actual = drawingBook.pageCount(n,p);
    ASSERT_EQ(expected,actual);
}

TEST_F(DrawingBookTest, testmethod2) {
    int n  = 5;
    int p = 4;
    int expected = 0;
    int actual = drawingBook.pageCount(n,p);
    ASSERT_EQ(expected,actual);
}