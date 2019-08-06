#include <string>
#include <vector>

//
// Created by user3301 on 8/5/2019.
//
class TinyURL{
public:
    std::string encode(std::string longURL) {
        url.push_back(longURL);
        return "http://tingurl.com/" + std::to_string(url.size() -1);
    }

    std::string decode(std::string shortURL) {
        auto pos = shortURL.find_last_of("/");
        auto s = url[std::stoi(shortURL.substr(pos+1))];
        return s;
    }

private:
    std::vector<std::string> url;
};
