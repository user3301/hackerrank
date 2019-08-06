//
// Created by user3301 on 8/6/2019.
//
#include <vector>
#include <stack>

using namespace std;
class DailyTemperatures{
public:
    vector<int> dailyTemperatures(vector<int>& T) {

        stack<int> stack;
        vector<int> ans(T.size(), 0);

        for(int i = 0; i < T.size(); ++i) {
            while(!stack.empty() && T[i] > T[stack.top()]) {
                auto t = stack.top();
                stack.pop();
                ans[t] = i - t;
            }
            stack.push(i);
        }
        return ans;
    }
};
