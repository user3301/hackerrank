//
// Created by user3301 on 2019-05-02.
//
#include <gtest/gtest.h>
#include "../questions/DesignerPDFViewer.cpp"
class DesignerPDFViewerTest:public testing::Test {
protected:
    DesignerPDFViewer designerPdfViewer;
};

TEST_F(DesignerPDFViewerTest, testmethod1) {
    std::vector<int> h{1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    std::string word = "abc";
    int expected = 9;
    int actual = designerPdfViewer.designerPdfViewer(h,word);
    ASSERT_EQ(expected,actual);
}

