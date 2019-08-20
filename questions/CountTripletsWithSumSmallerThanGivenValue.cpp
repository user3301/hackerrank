//
// Created by user3301 on 8/20/2019.
//
#include<vector>
#include <algorithm>
using namespace std;
class CountTripletsWithSumSmallerThanGivenValue{
public:
    int countTriplets(vector<int> arr, int sum) {
        int ans = 0;
        sort(arr.begin(), arr.end());

        for(int i = 0;i < arr.size() -2; ++i) {
            int l = i +1;
            int r = arr.size() -1;

            while(l < r) {
                if(arr[i]+ arr[l]+arr[r] >= sum) {
                    r--;
                }
                else {
                    ans += (r -l);
                    l++;
                }
            }
        }
        return ans;
    }
};
