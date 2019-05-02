//
// Created by user3301 on 2019-05-02.
//
class UtopianTree {
public:
    int utopianTree(int n) {
        int height = 1;
        for (int i = 1; i <= n; ++i) {
            if(i%2==1) height = height *2;
            else height +=1;
        }
        return height;
    }
};
