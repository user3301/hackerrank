//
// Created by user3301 on 2019-04-25.
//
#include <vector>
//#define loop(i,n) for(int i = 0; i < int(n); ++i)
class solution
{
public:
    // brutal force try every combination
//    int divisibleSumPairs(int n, int k, std::vector<int> ar)
//    {
//        int ans = 0;
//        for (int i = 0; i < n; ++i) {
//            for (int j = i+1; j <n ; ++j) {
//                if((ar[i]+ar[j])%k==0) ++ans;
//            }
//        }
//        return ans;
//    }

    // O(N) optimized solution
    int divisibleSumPairs(int n , int k, std::vector<int> ar)
    {
        std::vector<int> remainsTable(k, 0);

        for(int i = 0; i < n; ++i)
        {
            ++remainsTable[ar[i]%k];
        }

        int ans = remainsTable[0] * (remainsTable[0]-1)/2;

        for (int j = 1; j < remainsTable.size(); ++j) {
            if(j == k-j)
            {
                ans += remainsTable[j] * (remainsTable[j]-1)/2;
            }
            else if(j < k-j) ans += remainsTable[j] * remainsTable[k-j];
            else break;
        }
        return ans;
    }
};
