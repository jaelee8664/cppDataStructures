#include <bits/stdc++.h>

std::vector<std::string> split(std::string input, std::string delimiter){
    std::vector<std::string> ret;
    long long pos = 0;
    std::string token ="";
    while ((pos = input.find(delimiter)) != std::string::npos){
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    ret.push_back(input);
    return ret;
}

int main(){
    std::string s = "hello kendol is babo. It's real!";
    std::string d = " ";
    std::vector<std::string> a = split(s,d);
    for(std::string b : a) {std::cout << b << std::endl;}
    return 0;
}