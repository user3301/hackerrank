//
// Created by user3301 on 5/22/2019.
//
#include <stack>
#include <vector>
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
};
