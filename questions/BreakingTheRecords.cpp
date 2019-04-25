//
// Created by user3301 on 2019-04-25.
//
#include <vector>
class solution
{
public:
    std::vector<int> breakingRecords(std::vector<int> scores)
    {
        std::vector<int> ans(2,0);
        int min = scores[0], max = scores[0];
        for (int i = 1; i < scores.size(); ++i) {
            if(scores[i] < min)
            {
                ++ans[1];
                min = scores[i];
            }
            if(scores[i]> max)
            {
                ++ans[0];
                max = scores[i];
            }
        }
        return ans;
    }
};
