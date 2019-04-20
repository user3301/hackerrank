#include <gtest/gtest.h>
#include "../questions/SimpleArraySum.cpp"

class SimpleArraySumTest: public testing::Test
{
    protected:
        solution solution;
};

TEST_F(SimpleArraySumTest, areequal)
{
    std::vector vector = {1,2,3,4,10,11};
    ASSERT_EQ(solution.simpleArraySum(vector), 31);
}

