#include <iostream>

int max(int x, int y)
{
    return x > y ? x : y;
}

constexpr int cmax(int x, int y)
{
    return x > y ? x : y;
}

int main()
{
    int result {max(1, 4)}; // funciona 
    const int result_const {max(1, 8)}; // funciona 
    // constexpr int result {max(1, 4)}; // no funciona
    std::cout << result << std::endl;
    std::cout << result_const << std::endl;
    
    int result2 {cmax(5, 6)}; // funciona
    const int result2_const{cmax(4, 2)}; // funciona 
    constexpr int result2_constxpr{cmax(10, 20)}; // funciona 

    std::cout << result2 << std::endl;
    std::cout << result2_const << std::endl;
    std::cout << result2_constxpr << std::endl;

    return 0;
}