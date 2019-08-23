//
// Created by user3301 on 2019-08-11.
//
#include <vector>
#include <stack>
using namespace std;
class NextGreaterElement{
public:
    vector<int> findNextGreaterElement(vector<int> arr) {
        stack<int> stack;
        vector<int> ans(arr.size());
        ans[arr.size()-1] = -1;

        stack.push(0);

        for (int i = 1; i < arr.size()-1; ++i) {
            while(stack.size() > 0 &&arr[i] > arr[stack.top()]) {
                int idx = stack.top();
                stack.pop();
                ans[idx] = arr[i];
            }
            stack.emplace(i);
        }
        while(stack.size()!=0) {
            arr[stack.top()] = -1;
            stack.pop();
        }
        return ans;
    }
};
