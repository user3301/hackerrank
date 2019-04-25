//
// Created by user3301 on 2019-04-24.
//
#include <vector>
class solution
{
public:
    int getTotalX(std::vector<int> a, std::vector<int> b)
    {
        /**
         * theorm: lcm(a,b) = a*b / gcd(a,b) =>
         *
         * lcm(1...n) = lcm(1..n-1) * n / gcd(ans, n)
         */
         int gcd4b = 0;
        for (int i = 0; i < b.size(); ++i) {
            gcd4b = gcd(gcd4b, b[i]);
        }
        int gcd4a = 0;
        int lcm4a = a[0];
        for (int j = 1; j < a.size(); ++j) {
            lcm4a = lcm4a * a[j] / gcd(lcm4a, a[j]);
        }
        int ans = 0;
        int i = 1;
        while(lcm4a*i <= gcd4b)
        {
            if(gcd4b% (lcm4a*i++) == 0) ++ans;
        }
        return ans;
    }

private:
    int gcd(int a, int b)
    {
        if(a == 0) return b;
        return gcd(b%a, a);
    }

    int lcm(int a, int b)
    {
        return a*b / gcd(a,b);
    }
};
