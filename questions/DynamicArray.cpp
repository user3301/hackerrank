//
// Created by user3301 on 5/7/2019.
//
#include <vector>
#include <iostream>
class DynamicArray {
public:
    std::vector<int> dynamicArray(int n, std::vector<std::vector<int>> queries) {
        std::vector<std::vector<int>> arr(n);
        std::vector<int> ans;
        int lastAnswer = 0;
        for (int i = 0;
             i < queries.size(); ++i) {
            if(queries[i][0] == 1) {
                arr[(queries[i][1]^lastAnswer) % n].push_back(queries[i][2]);  //be mindful the ^ operator has lower priority of %
            }
            if(queries[i][0]==2) {
                int pos = (queries[i][1]^lastAnswer) %n;
                int index = queries[i][2] % (arr[pos].size());
                lastAnswer = arr[pos][index];
                ans.push_back(lastAnswer);
                std::cout<<lastAnswer<<std::endl;
            }
        }
        return ans;
    }
};
