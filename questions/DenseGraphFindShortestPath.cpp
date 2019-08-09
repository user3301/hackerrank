//
// Created by user3301 on 8/9/2019.
//
#include <vector>
#include <stack>
#include <climits>
using namespace std;

class DenseGraphFindShortestPath{
public:
    int findShortestPath(vector<vector<int>>& graph, int a, int b) {
         vector<int> ans;
         bool flag= true;
        for(int i = 0; i< graph.size() && flag; ++i) {
            for(int j = 0; j< graph[i].size(); ++j) {
                if(graph[i][j] == a) {
                    dfs(graph, a, b, ans);
                    flag = false;
                }
                if(graph[i][j] == b) {
                    dfs(graph, b, a, ans);
                    flag = false;
                }
            }
        }
        int min = INT_MAX;
        for(int i = 0; i < ans.size(); ++i) {
            min = min < ans[i] ? min : ans[i];
        }
        return min == INT_MAX? -1: min;
    }

private:
    void dfs(vector<vector<int>>& graph, int a, int b, vector<int>& ans) {
        stack<vector<int>> stack;
        stack.push({a,0});

        while(stack.size()!=0) {
            auto current = stack.top();
            stack.pop();
            for(int i = 0; i< graph[current[0]].size(); ++i) {
                if(i==b &&graph[current[0]][i] == 1) {
                    ans.push_back(current[1] + 1);
                    graph[current[0]][i] = -1;
                    graph[i][current[0]] = -1;
                }
                else if(graph[current[0]][i] == -1 || graph[current[0]][i]==0) continue;
                else {
                    stack.push({i, current[1]+1});
                    graph[current[0]][i] = -1;
                    graph[i][current[0]] = -1;
                }

            }
        }
    }
};
