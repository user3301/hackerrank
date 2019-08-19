//
// Created by user3301 on 8/19/2019.
//
#include<string>
using namespace std;
class ReverseStringWithoutSpecialCharacters{
public:
    string reverse(string str) {
        if(str.empty()) return str;

        int l = 0;
        int r = str.length() -1;
        while(l < r) {
            if(!isCharacter(str[l])) l++;

            else if(!isCharacter(str[r])) r--;

            else {
                swap(str[l], str[r]);
                l++;
                r--;
            }
        }
        return str;
    }

private:
    bool isCharacter(char c) {
        return ('A' <= c && c<= 'Z') || ('a'<=c && c <='z');
    }
};
