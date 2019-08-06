//
// Created by user3301 on 8/6/2019.
//
#include <vector>
#include <queue>
using namespace std;
//FIXME: WRONG ANSWER
class FriendsCircle{
public:
    int findCircleNum(std::vector<std::vector<int>>& M) {
        queue<vector<int>> q;
        vector<vector<bool>> seen(M.size(), std::vector<bool>(M[0].size(), false));

        int ans = 0;
        for(int i = 0; i < M.size(); ++i) {
            for(int j = 0; j < M[i].size(); ++j) {
                if(M[i][j] == 0 || seen[i][j]) continue;
                if(M[i][j] == 1 && !seen[i][j]) {
                    traversal(i, j, M, seen);
                    ans++;
                }
            }
        }
        return ans;
    }

private:
    void traversal(int x, int y, vector<vector<int>> M, vector<vector<bool>>& seen) {
        queue<vector<int>> q;

        vector<vector<int>> directions{{1,0},{0,1},{-1,0},{0,-1}};
        q.emplace(vector<int>{x,y});

        while(q.size()!=0) {
            auto current = q.front();
            q.pop();
            for(auto dir: directions) {
                int xx = current[0] + dir[0];
                int yy = current[1] + dir[1];
                if(xx < 0 || xx >= M.size() || yy < 0 || yy > M[0].size()-1) continue;
                if(M[xx][yy] == 0 || seen[xx][yy]) continue;
                if(M[xx][yy] == 1) {
                    seen[xx][yy] = true;
                    q.emplace(vector<int>{xx,yy});
                }
            }
        }
    }
};
