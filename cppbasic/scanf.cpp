#include <iostream>

int n, m;
int a[10][10];
int main(){
    std::cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%1d", &a[i][j]);
            std::cout << a[i][j] << std::endl;
        }
    }
    return 0;
}