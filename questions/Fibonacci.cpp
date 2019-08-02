//
// Created by user3301 on 8/2/2019.
//
class Fibonacci {
public:
    int fib(int n) {
        int dp[n];
        dp[0] = 0;
        dp[1] = 1;

        for (int i = 2;
             i < n; ++i) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n-1];
    }
};
