//
// Created by user3301 on 5/8/2019.
//
#include <vector>
class LeftRotation {
public:
    std::vector<int> leftRotation(std::vector<int>& ar, int n, int d) {
       std::vector<int> ans(n);
        d%=n;
        for (int i = 0;
             i < n; ++i) {
            ans[(n+i-d)%n] = ar[i];
        }
        return ans;
    }
};
