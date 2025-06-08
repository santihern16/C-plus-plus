#include <iostream>
#include <array>

int main()
{
    constexpr size_t arrLength{4};

    int arr[arrLength];
    std::array<int, arrLength> nums = {1, 2, 3, 4};
    return 0;
}