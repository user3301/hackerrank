//
// Created by user3301 on 5/1/2019.
//
#include <vector>
class TheHurdleRace {
public:
    int hurdleRace(int k, std::vector<int> height) {
        int ans = 0;
        for (int i = 0; i < height.size(); ++i) {
            if(k < height[i])
            {
                int potionsNeeded = height[i] - k;
                ans += potionsNeeded;
                k += potionsNeeded;
            }

        }
        return ans;
    }
};
