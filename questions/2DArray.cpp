//
// Created by user3301 on 5/6/2019.
//
#include <vector>
#include <climits>
#include <limits>

class TwoDArray {
public:
    int hourglassSum(std::vector<std::vector<int>> arr) {
        int max = std::numeric_limits<int>::min();
        for (int i = 0;
             i < arr.size(); ++i) {
            for (int j = 0;
                 j < arr[i].size(); ++j) {
                if(i+2 < arr.size() && j +2 < arr[i].size()) {
                    int localSum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j]+ arr[i+2][j+1]+arr[i+2][j+2];
                    max = max > localSum ? max : localSum;
                }
            }
        }
        return max;
    }
};
