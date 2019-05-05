//
// Created by user3301 on 2019-05-05.
//
#include <vector>
class CircularArrayRotation {
public:
    std::vector<int> circularArrayRotation(std::vector<int> a, int k, std::vector<int> queries) {
        std::vector<int> ans(queries.size(), 0);
        std::vector<int> rotated;
        int split_id = a.size() - (k%a.size());
        for (int i = split_id; i <a.size() ; ++i) {
            rotated.push_back(a[i]);
        }
        for (int j = 0; j < split_id ; ++j) {
            rotated.push_back(a[j]);
        }
        for (int l = 0; l < queries.size(); ++l) {
            ans[l] = rotated[queries[l]];
        }
        return ans;
    }
};
