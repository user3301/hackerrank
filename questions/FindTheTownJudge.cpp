//
// Created by user3301 on 8/6/2019.
//
#include <vector>
#include <map>
using namespace std;
class FindTheTownJudge{
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        map<int, int> mapT;
        for(int i = 1; i <= N; ++i) {
            mapT.emplace(i, 0);
        }

        for(int j = 0; j< trust.size(); ++j) {
            auto truster = trust[j][0];
            auto trustee = trust[j][1];
            if(mapT.find(truster)!=mapT.end()) {
                mapT.erase(truster);
            }

            if(mapT.find(trustee)!=mapT.end()) {
                mapT.find(trustee)->second +=1;
            }
        }

        for(auto t: mapT) {
            if(t.second == N-1) return t.first;
        }
        return -1;
        }
    };
