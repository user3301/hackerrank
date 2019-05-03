//
// Created by user3301 on 2019-05-03.
//
#include <vector>
#include <algorithm>
class BeautifulDaysAtTheMovies {
public:
    int beautifulDays(int i, int j, int k) {
        int ans = 0;

        for (int l = i; l <= j; ++l) {
            if(std::abs(l - reverse(l))%k==0) ++ans;
        }
        return ans;
    }

private:
    int reverse(int num) {
        int rev = 0;

        while(num > 0) {
            rev = rev *10 + num%10;
            num /=10;
        }
        return rev;

    }
};
