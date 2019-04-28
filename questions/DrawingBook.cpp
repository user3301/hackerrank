//
// Created by user3301 on 2019-04-28.
//
class DrawingBook
{
public:
    int pageCount(int n, int p) {

        return p/2 < (n/2 - p/2) ? p/2 : (n/2 - p/2);
    }
};
