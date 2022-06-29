#include<bits/stdc++.h>

std::vector<std::pair<int, int>> v;
bool cmp(std::pair<int, int> a, std::pair<int, int> b){
    return a.first > b.first;
}

int main(){
    for(int i=10; i>=1; i--){
        v.push_back({i, 10- i});
    }
    std::sort(v.begin(), v.end(), cmp);
    for(auto it : v){
        std::cout << it.first << " : " << it.second << std::endl;
    }
    return 0;
}