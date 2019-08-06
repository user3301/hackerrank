//
// Created by user3301 on 8/5/2019.
//
#include <gtest/gtest.h>
#include "../questions/TinyURL.cpp"
class TinyURLTest:public testing::Test {
protected:
    TinyURL tinyUrl;
};

TEST_F(TinyURLTest, testmethod1) {
    std::string input = "https://www.baidu.com";
    auto encode = tinyUrl.encode(input);
    auto decode = tinyUrl.decode(encode);
    ASSERT_EQ("http://tingurl.com/0", encode);
    ASSERT_EQ("https://www.baidu.com", decode);
}
