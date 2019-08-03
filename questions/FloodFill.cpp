#include <vector>
#include <queue>

//
// Created by user3301 on 8/3/2019.
//
class FloodFill{
public:
    std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>>& image, int sr, int sc, int newColor) {
        std::vector<std::vector<int>> directions {{1,0},{0,1},{0,-1},{-1,0}};

        int start = image[sr][sc];

        std::queue<std::vector<int>> q;
        q.emplace(std::vector<int>{sr,sc});
        image[sr][sc] = newColor;

        while(q.size()!=0) {
            auto current = q.front();
            q.pop();
            for(auto dir:directions) {
                int x = current[0] + dir[0];
                int y = current[1] + dir[1];
                if(x < 0 || x >= image.size()|| y < 0 || y >= image[0].size()) continue;
                if(image[x][y] == newColor || image[x][y]!=start) continue;
                else
                {
                    image[x][y] = newColor;
                    q.emplace(std::vector<int>{x,y});
                }
            }
        }
        return image;
    }
};
