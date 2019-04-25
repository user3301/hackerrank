//
// Created by user3301 on 2019-04-25.
//
#include <vector>
class solution
{
public:
    int divisbleSumPairs(int n, int k, std::vector<int> ar)
    {
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j <n ; ++j) {
                if((ar[i]+ar[j])%k==0) ++ans;
            }
        }
        return ans;
    }
};
