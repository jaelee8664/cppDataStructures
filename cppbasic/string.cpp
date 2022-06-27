#include<bits/stdc++.h>

std::string dopa = "amumu is best";
int main(){
    std::cout << dopa << std::endl;
        if(dopa.find("amumu") != std::string::npos){
            std::cout << "amumu in dopa" << std::endl;
        }
    std::cout << dopa.substr(0, 3) << std::endl;
    std::reverse(dopa.begin(), dopa.end());
    std::cout << dopa << std::endl;

    return 0;
}