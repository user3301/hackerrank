#include<vector>
class solution
{
public:
    std::vector<int> compareTriplets(std::vector<int> a, std::vector<int> b)
    {
        std::vector<int> ans(2,0);
        for (int i = 0; i < a.size(); ++i) {
            if(a[i]>b[i]) ++ans[0];
            else ++ans[1];
        }
        return ans;
    }
};
