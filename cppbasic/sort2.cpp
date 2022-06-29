#include<bits/stdc++.h>

std::vector<std::pair<int, int>> v;

int main(){
    for(int i=10; i>=1; i--){
        v.push_back({i, 10-i});

    }
    std::sort(v.begin(), v.end());
    for(auto it : v) 
    std::cout << it.first << " : " << it.second << std::endl;
    return 0;
}