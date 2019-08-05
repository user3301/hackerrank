//
// Created by user3301 on 8/5/2019.
//
#include <string>
#include <stack>
#include <unordered_set>
class ValidParentheses{
public:
    bool isValid(std::string s) {
        std::stack<char> stack;
        std::unordered_set<char> left{'(','{','['};

        for(auto c:s) {
            if(left.find(c)!=left.end()) {
                stack.push(c);
            }
            else {
                char current = '*';
                if(stack.size()==0) return false;
                if(stack.top() =='(') current = ')';
                if(stack.top()=='[') current = ']';
                if(stack.top()=='{') current = '}';
                if(current != c) return false;
                stack.pop();


            }
        }

        return stack.empty();
    }
};
