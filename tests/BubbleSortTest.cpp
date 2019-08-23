//
// Created by user3301 on 8/21/2019.
//
#include <gtest/gtest.h>
#include "../questions/BubbleSort.cpp"
class BubbleSortTest:public testing::Test{
protected:
    BubbleSort bubbleSort;
};

TEST_F(BubbleSortTest, testmethod1){
    int arr[5] = {5,3,2,4,1};
    int size = 5;
    int expected[] = {1,2,3,4,5};
    bubbleSort.bubbleSort(arr, size);
    for(int i = 0; i < size; ++i) {
        ASSERT_EQ(expected[i],arr[i]);
    }
}
