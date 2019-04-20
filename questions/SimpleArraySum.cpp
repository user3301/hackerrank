#include<vector>
class solution
{
public:
    int simpleArraySum(std::vector<int>& arr)
    {
        int sum = 0;
        for (int i = 0; i < arr.size(); ++i) {
            sum +=arr[i];
        }
        return sum;
    }
};

