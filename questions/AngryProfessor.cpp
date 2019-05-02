//
// Created by user3301 on 2019-05-02.
//
#include <string>
#include <vector>
class AngryProfessor {
public:
    std::string angryProfessor(int k, std::vector<int> a) {
        int OnTimeCount = 0;
        for (int i = 0; i < a.size(); ++i) {
            if(a[i] <=0) ++OnTimeCount;
        }

        return OnTimeCount >= k ? "NO": "YES";
    }
};
