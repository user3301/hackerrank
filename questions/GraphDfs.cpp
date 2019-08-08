//
// Created by user3301 on 8/8/2019.
//
#include <vector>
#include <stack>
using namespace std;
class GraphDfs{
public:
    int findComponents(vector<vector<int>> graph) {
        if(graph.size() == 0) return 0;
        int count = 1;
        for(int i =0; i< graph.size(); ++i) {
           for(int j = 0; j< graph[i].size(); ++j) {
               if(graph[i][j] == 0 || graph[i][j]==-1) continue;
               dfs(graph, i, j);
               count++;
           }
        }
        return count;
    }

private:
    void dfs(vector<vector<int>>& graph, int x, int y) {
        stack<int> stack;
        stack.push(x);

        while(stack.size()!=0) {
            auto current = stack.top();
            stack.pop();
            for(int i = 0; i < graph[0].size(); ++i) {
                if(graph[current][i] == 0 || graph[current][i] ==-1) continue;
                stack.push(i);
                graph[current][i] = -1;
                graph[i][current] = -1;
            }
        }
    }
};
