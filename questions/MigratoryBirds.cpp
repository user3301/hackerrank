//
// Created by user3301 on 2019-04-26.
//
#include <vector>
#include <unordered_map>
class solution
{
public:
    int migratoryBirds(std::vector<int> arr)
    {
        std::unordered_map<int, int> hashtable;
        int max_frequency = 0;
        int ans = 0;
        for (int i = 0; i < arr.size(); ++i) {
            if(hashtable.find(arr[i]) == hashtable.end())
            {
                hashtable.emplace(arr[i],1);
            }
            else hashtable.find(arr[i])->second = hashtable[arr[i]] +1;
            if(hashtable.find(arr[i])->second > max_frequency)
            {
                ans = arr[i];
                max_frequency = hashtable.find(arr[i])->second;
            }
            if(hashtable.find(arr[i])->second == max_frequency && hashtable.find(arr[i])->first < ans)
            {
                ans = arr[i];
            }
        }
        return ans;
    }
};
