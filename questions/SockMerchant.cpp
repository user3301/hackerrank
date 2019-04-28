#include <vector>
#include <unordered_map>
#include <unordered_set>
//
// Created by user3301 on 2019-04-27.
//
class SockMerchant
{
public:
    // two pass using unordered_map
//    int sockMerchant(int n, std::vector<int> ar) {
//        std::unordered_map<int, int> hashtable;
//        int ans = 0;
//        for (int i = 0; i < ar.size(); ++i) {
//            if(hashtable.find(ar[i]) == hashtable.end()) hashtable.emplace(ar[i], 1);
//            else hashtable.find(ar[i])->second = hashtable.find(ar[i])->second +1;
//        }
//        for(auto kv:hashtable)
//        {
//            ans += kv.second /2;
//        }
//        return ans;
//    }

    // one pass using unordered_set
    int sockMerchant(int n, std::vector<int> ar) {
        std::unordered_set<int> hashset;
        int pairs = 0;
        for (int i = 0; i < ar.size(); ++i) {
            if(hashset.find(ar[i])!= hashset.end()) {
                ++pairs;
                hashset.erase(ar[i]);
            }
            else hashset.emplace(ar[i]);
        }
        return pairs;
    }
};
