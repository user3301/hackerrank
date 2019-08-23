//
// Created by user3301 on 8/12/2019.
//
#include <vector>
#include <stack>

using namespace std;
class TheStockSpan{
public:
    vector<int> calculateSpan(vector<int> stocks) {
        vector<int> ans(stocks.size());

        stack<int> stack;

        ans[0]=1;
        stack.push(0);
        for(int i = 1; i < stocks.size(); ++i) {
            while(stack.size()!=0 && stocks[stack.top()] < stocks[i]) {
                stack.pop();
            }
            ans[i] = stack.size() ==0 ? i +1: i - stack.top();
            stack.push(i);
        }

        return ans;
    }
};
