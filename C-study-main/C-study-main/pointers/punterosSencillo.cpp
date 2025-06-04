#include <iostream>

/**
 * Demonstrates basic pointer usage in C++.
 *
 * - Declares an integer variable `num` and initializes it to 10.
 * - Declares a pointer `pNum` and assigns it the address of `num`.
 * - Prints the value pointed to by `pNum` (should output 10).
 * - Changes the value of `num` to 20 and prints the value pointed to by `pNum` (should output 20).
 * - Changes the value at the address pointed to by `pNum` to 30 and prints the value pointed to by `pNum` (should output 30).
 * - Prints the value of `num` (should also output 30, showing that modifying through the pointer affects the original variable).
 */
int main() 
{
    int num{10};    
    int *pNum = &num;

    std::cout << *pNum << "\n";

    num = 20;
    std::cout << *pNum << "\n";

    *pNum = 30;
    std::cout << *pNum << "\n";

    std::cout << num << "\n";

    return 0;
}