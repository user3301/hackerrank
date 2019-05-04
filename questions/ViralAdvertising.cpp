//
// Created by user3301 on 2019-05-04.
//
#include <math.h>
class ViralAdvertising {
public:
    int viralAdvertising(int n) {
        int share = 5;
        int cum = 0;
        for (int i = 0; i < n; ++i) {
            int like = floor(share/2);
            cum += like;
            share = floor(share/2)*3;
        }
        return cum;
    }
};
