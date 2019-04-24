//
// Created by user3301 on 4/24/2019.
//
#include <vector>
#include <iostream>
class solution
{
public:
    void countApplesAndOranges(int s, int t, int a, int b, std::vector<int> apples, std:: vector<int> oranges)
    {
        std::vector<int> ans(2, 0);
        for (int i = 0; i < apples.size(); ++i) {
            int pos = a + apples[i];
            if (pos >= s && pos <= t)
                ++ans[0];
        }
        for (int j = 0; j < oranges.size(); ++j) {
            int pos = b + oranges[j];
            if (pos >= s && pos <= t)
                ++ans[1];
        }

        std::cout << ans[0] << std::endl;
        std::cout << ans[1];
    }
};
