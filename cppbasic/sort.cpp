#include <bits/stdc++.h>
std::vector<int> a;
int b[5];
int main(){
    for(int i=5; i>=1; i--) b[i-1] = i;
    for(int i=5; i>=1; i--) a.push_back(i);\
    // 오름차순
    std::sort(b, b+5);
    std::sort(a.begin(), a.end());
    for(int i : b) std::cout << i << ' ';
    std::cout << '\n';
    for(int i : a) std::cout << i << ' ';
    std::cout << '\n';

    std::sort(b, b+5, std::less<int>());
    std::sort(a.begin(), a.end(), std::less<int>());
    for(int i : b) std::cout << i << ' ';
    std::cout << '\n';
    for(int i : a) std::cout << i << ' ';
    std::cout << '\n';

    // 내림차순
    std::sort(b, b+5, std::greater<int>());
    std::sort(a.begin(), a.end(), std::greater<int>());
    for(int i : b) std::cout << i << ' ';
    std::cout << '\n';
    for(int i : a) std::cout << i << ' ';
    std::cout << '\n';

    return 0;
}