//
// Created by user3301 on 2019-05-02.
//
#include <vector>
#include <string>
class DesignerPDFViewer {
public:
    int designerPdfViewer(std::vector<int> h, std::string word) {
        int maxHeight = 0;
        for (int i = 0; i < word.length(); ++i) {
            maxHeight = maxHeight > h[word[i]-'a'] ? maxHeight : h[word[i]-'a'];
        }
        return maxHeight * word.length();
    }
};
