//
// Created by user3301 on 2019-04-22.
//
#include <vector>
class solution
{
public:
    int birthdayCakeCandles(std::vector<int> arr)
    {
        int tallest = 0;
        int count = 0;
        for (int i = 0; i < arr.size(); ++i) {
            if(arr[i] > tallest)
            {
                tallest = arr[i];
                count = 1;
            }
            else if(arr[i] == tallest) ++count;
            else continue;
        }
        return count;
    }
};
