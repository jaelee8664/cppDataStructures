#include <iostream>
#include <array>

int main()
{
    
std::array<int, 10> arr1; // 크기가 10인 int 타입 배열선언
arr1[0] = 1; // 첫 번째 원소를 1로 설정
std::cout << "arr1 배열의 첫 번째 원소: " << arr1[0] <<std::endl;

std::array<int, 4> arr2 = {1, 2, 3, 4};
std::cout << "arr2의 모든 원소: ";

for (int i=0; i< arr2.size(); i++)
    std::cout << arr2[i] << " ";
std::cout << std::endl;

return 0;
}
