//
// Created by user3301 on 5/22/2019.
//
#include <stack>
#include <vector>
#include <algorithm>

class EqualStacks {
public:
    int equalStacks(std::vector<int> h1, std::vector<int> h2, std::vector<int> h3) {
        int height1 = 0;
        int height2 = 0;
        int height3 = 0;
        for(int i=0;i<h1.size();++i) height1 +=h1[i];
        for(int i=0;i<h2.size();++i) height2 +=h2[i];
        for(int i=0;i<h3.size();++i) height3 +=h3[i];
        while(height1!=height2 || height2!=height3 || height1 != height3) {
            if(height1 >= height2 && height1 >=height3) {
                height1 -= h1.front();
                h1.erase(h1.begin());
            }
            else if(height2>=height1 && height2>=height3) {
                height2 -= h2.front();
                h2.erase(h2.begin());
            }
            else if(height3 >= height1 && height3 >= height2) {
                height3 -= h3.front();
                h3.erase(h3.begin());
            }
        }
        return height1;
    }

    int equalStacks2(std::vector<int> h1, std::vector<int> h2, std::vector<int> h3) {
        std::vector<int> levelSum1(h1.size());
        levelSum1[0] = h1[h1.size()-1];
        for(int i = h1.size()-2, j =1; i >=0;--i, ++j) {
            levelSum1[j] = levelSum1[j-1] + h1[i];
        }

        std::vector<int> levelSum2(h2.size());
        levelSum2[0] = h2[h2.size()-1];
        for(int i = h2.size()-2, j =1; i >=0;--i, ++j) {
            levelSum2[j] = levelSum2[j-1] + h2[i];
        }

        std::vector<int> levelSum3(h3.size());
        levelSum3[0] = h3[h3.size()-1];
        for(int i = h3.size()-2, j =1; i >=0;--i, ++j) {
            levelSum3[j] = levelSum3[j-1] + h3[i];
        }

        int p1 = levelSum1.size() -1;
        int p2 = levelSum2.size() -1;
        int p3 = levelSum3.size() -1;
        while(levelSum1[p1]!= levelSum2[p2] || levelSum1[p1]!=levelSum3[p3] || levelSum2[p2]!=levelSum3[p3]) {
            if(levelSum1[p1] >= levelSum2[p2] && levelSum1[p1] >= levelSum3[p3]) {
                p1--;
            }
            else if(levelSum2[p2] >= levelSum1[p1] && levelSum2[p2] >= levelSum3[p3]) {
                p2--;
            }
            else if(levelSum3[p3] >= levelSum2[p2] && levelSum3[p3] >= levelSum1[p1]) {
                p3--;
            }
        }
        return levelSum1[p1];

    }
};
