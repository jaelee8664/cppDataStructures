#include <iostream>
#include <array>
void print(std::array<int, 5> arr)
{
    for (auto ele : arr)
        std::cout << ele << ", ";
}

int main(int argc, char **argv)
{
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    print(arr);

    return 0;

}

