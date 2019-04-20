#include <gtest/gtest.h>
#include "../questions/CompareTheTriplets.cpp"

class CompareTheTripletsTest: public testing::Test
{
protected:
    solution solution;
};

TEST_F(CompareTheTripletsTest, areequal)
{
    std::vector<int> input_a{17,28,30};
    std::vector<int> input_b{99,16,8};
    std::vector<int> expected{2,1};
    auto actual = solution.compareTriplets(input_a, input_b);
    for (int i = 0; i < expected.size(); ++i) {
        ASSERT_EQ(expected[i], actual[i]);
    }
}
