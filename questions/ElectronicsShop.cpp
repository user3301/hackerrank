//
// Created by user3301 on 2019-04-29.
//
#include <vector>
class ElectronicsShop {
public:
    // only works for c++ 14
    int getMoneySpent(std::vector<int> keyboards, std::vector<int> drives, int b) {
        std::sort(std::rbegin(keyboards), std::rend(keyboards));
        std::sort(std::begin(drives), std::end(drives));

        int ans = -1;
        for (int i = 0, j = 0; i < keyboards.size(); ++i) {
            for (; j < drives.size() ; ++j) {
                if(keyboards[i] + drives[j] > b) break;
                ans = std::max(keyboards[i]+ drives[j], ans);
            }
        }


        return ans;
    }
};
