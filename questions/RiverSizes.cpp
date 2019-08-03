//#include <vector>
//#include <queue>
//
////
//// Created by user3301 on 8/2/2019.
////
//class RiverSizes {
//public:
//    std::vector<std::vector<int>>
//    getUnvisited(int i, int j,
//                 std::vector<std::vector<int>> matrix,
//                 std::vector<std::vector<bool>> visited) {
//        std::vector<std::vector<int>> unvisited;
//
//        std::vector<std::vector<int>> directions(4);
//        directions[0] = std::vector<int>{1,0};
//        directions[1] = std::vector<int>{0,1};
//        directions[2] = std::vector<int>{-1,0};
//        directions[3] = std::vector<int>{0,-1};
//
//        for(auto dir:directions) {
//            int x = i + dir[0];
//            int y = j + dir[1];
//            if(x < 0 || x >= matrix.size() || y < 0 || y > matrix[0].size()) continue;
//            if(visited[x][y]) continue;
//            unvisited.push_back(std::vector<int>{x,y});
//        }
//        return unvisited;
//
//    }
//
//    void
//    traverseNode(int i, int j,
//                 std::vector<std::vector<int>> matrix,
//                 std::vector<std::vector<bool>> visited,
//                 std::vector<int> ans) {
//        int currentRiverSize = 0;
//        std::queue<int[]> q;
//        int first[] = {i,j};
//        q.emplace(first);
//        while(q.size()!=0) {
//            auto current = q.front();
//            q.pop();
//            if(visited[current[0]][current[1]])
//            {
//                continue;
//            }
//            visited[current[0]][current[1]] = true;
//            if(matrix[current[0]][current[1]]==0)
//            {
//                continue;
//            }
//            currentRiverSize++;
//            auto unvisited = getUnvisited(i,j, matrix, visited);
//            for(auto node: unvisited) {
//                q.emplace(node);
//            }
//        }
//        if(currentRiverSize >0) ans.push_back(currentRiverSize);
//    }
//
//    std::vector<int> riverSizes(std::vector<std::vector<int>> matrix) {
//        std::vector<int> ans;
//        std::vector<std::vector<bool>> visited(
//                matrix.size(),
//                std::vector<bool>(
//                        matrix[0].size(),
//                        false));
//
//        for(int i = 0; i < matrix.size(); ++i) {
//            for(int j = 0; j < matrix[i].size(); ++j) {
//                if(visited[i][j]) {
//                    continue;
//                }
//                traverseNode(i, j, matrix, visited, ans);
//            }
//        }
//        return ans;
//    }
//
//};
