#include<bits/stdc++.h>

std::pair<int, int> pi;
std::tuple<int, int, int> tl;
int a, b, c;
int main(){
    pi = {1, 2};
    tl = std::make_tuple(1, 2, 3);
    std::tie(a, b) = pi;
    std::cout << a << " : " << b << std::endl;
    std::tie(a, b, c) = tl;
    std::cout << a << " : " << b << " : " << c << std::endl;

    return 0;
}