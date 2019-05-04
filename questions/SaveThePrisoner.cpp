//
// Created by user3301 on 2019-05-04.
//
class SaveThePrisoner {
public:
    int saveThePrisoner(int n, int m, int s) {
        int id = (s + m-1)%n;
        return id==0? n : id;
    }
};
