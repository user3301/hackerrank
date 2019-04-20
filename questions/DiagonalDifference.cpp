#include <vector>
class solution
{
public:
    int diagonalDifference(std::vector<std::vector<int>> arr)
    {
        int leftDiagonal = 0;
        int rightDiagonal = 0;
        for (int i = 0, j = 0; i <arr[0].size() && j < arr.size() ; ++i,++j) {
            leftDiagonal += arr[i][j];
        }
        for (int k = arr[0].size()-1, l = 0; k >=0 && l < arr.size() ; --k, ++l) {
            rightDiagonal += arr[k][l];
        }
        return abs(leftDiagonal - rightDiagonal);
    }
};
