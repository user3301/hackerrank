//
// Created by user3301 on 8/8/2019.
//
#include <vector>
#include <stack>
using namespace std;
class SparseGraphDfs{
public:
    int findComponents(vector<vector<int>>& graph) {
        if(graph.size() ==0) return 0;
        int count = 0;
        for(int i = 0; i < graph.size(); ++i) {
           for (int j = 0; j < graph[i].size(); ++j) {
               if(graph[i][j] == -1) continue;
               dfs(graph, i);
               count++;
           }
        }
        return count;
    }

private:
    void dfs(vector<vector<int>>& graph, int x) {
        stack<int> stack;

        stack.push(x);

        while(stack.size()!=0) {
            int current = stack.top();
            stack.pop();
            for(int i =0; i < graph[current].size(); ++i) {
                if(graph[current][i] == -1) continue;
                int node = graph[current][i];
                stack.push(node);
                graph[current][i] = -1;
                for(int j = 0; j < graph[node].size(); ++j) {
                    if(graph[node][i] == current) graph[node][i] = -1;
                }
            }
        }
    }
};
