//
// Created by user3301 on 2019-04-22.
//
#include <vector>
#include <iostream>
class solution
{
public:
    void miniMaxSum(std::vector<int> arr)
    {
        std::vector<long> ans(2,0);
        std::sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); ++i) {
            if(i ==0)
            {
                ans[0]+= (long)arr[i];
            }
            else if(i == arr.size()-1)
            {
                ans[1] += (long)arr[i];
            }
            else
            {
                ans[0] += (long)arr[i];
                ans[1] += (long)arr[i];
            }
        }
        std::cout<< ans[0] << " " << ans[1];
    }
};
