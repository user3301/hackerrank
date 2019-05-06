//
// Created by user3301 on 5/6/2019.
//
#include <vector>
#include <algorithm>
class Arrays {
public:
//    std::vector<int> reverseArray(std::vector<int> a) {
//        int left = 0;
//        int right = a.size() -1;
//        while(left < right)
//        {
//            int temp = a[left];
//            a[left] = a[right];
//            a[right] = temp;
//            ++left;
//            --right;
//        }
//        return a;
//    }

    std::vector<int> reverseArray(std::vector<int> a) {
        std::reverse(a.begin(), a.end());
        return a;
    }
};
