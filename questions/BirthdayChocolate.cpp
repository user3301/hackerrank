//
// Created by user3301 on 2019-04-25.
//
#include <vector>
class solution
{
public:
    int birthday(std::vector<int>s, int d, int m)
    {
        int ans = 0;
        if(m > s.size()) return ans;

        int sw = 0;
        for (int i = 0; i < m; ++i) {
            sw += s[i];
        }
        int left = 0, right = m;
        while(right <= s.size())
        {
            if(sw == d) ++ans;
            sw -= s[left++];
            sw += s[right++];
        }
        return ans;
    }
};
