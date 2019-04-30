//
// Created by user3301 on 4/30/2019.
//
#include <vector>
#include <algorithm>
class PickingNumbers {
public:
    int pickingNumbers(std::vector<int> a) {
        int ans = 0;
        std::sort(std::begin(a), std::end(a));
        int min = a[0];
        int max = a[0];
        int length = 1;
        for (int i = 1; i < a.size(); ++i) {
            if(std::abs(a[i] - min) <=1 && std::abs(a[i]-max) <=1)
            {
                ++length;
                min = min < a[i]? min: a[i];
                max = max > a[i] ? max : a[i];
                ans = ans > length ? ans : length;
            }
            else
            {
                length = 1;
                min = a[i];
                max = a[i];
            }
        }
        return ans;

    }
};

