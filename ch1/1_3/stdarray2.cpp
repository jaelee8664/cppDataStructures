#include <iostream>
#include <array>

int main()
{
    
std::array<int, 4> arr3 = {1, 2, 3, 4};

try
{
    std::cout << arr3.at(3) << std::endl; // 에러아님
    std::cout << arr3.at(4) << std::endl; // std::out_of_range 예외 발생

}
catch (const std::out_of_range & ex)
{
    std::cerr << ex.what() << std::endl;
}

return 0;


}

