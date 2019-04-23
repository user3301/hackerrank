//
// Created by user3301 on 2019-04-23.
//
#include <vector>
class solution
{
public:
    std::vector<int> gradingStudents(std::vector<int> grades)
    {
        for (int i = 0; i < grades.size(); ++i) {
            if(grades[i] < 38) continue;
            else
            {
                if(grades[i]%10 == 3|| grades[i]%10 ==4 || grades[i]%10 ==8 || grades[i]%10 == 9)
                {
                    grades[i] = (grades[i]/5 +1) *5;
                }
            }
        }
        return grades;
    }
};
