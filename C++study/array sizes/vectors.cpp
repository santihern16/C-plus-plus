#include <iostream>
#include <vector>

struct Foo
{
    std::vector<int> ages{10, 20, 30, 23};
    std::vector<int> v1{std::vector<int>(8)}; // Si se puede :)
    // std::vector<int> v1(8); // No se puede :(
};

int main()
{
    std::vector<int> empty{};
    std::vector nums{1, 3, 6, 6, 12}; // we can skip type initialization, the compiler deducts its type with the elements of the vector
    std::vector<int> primes{2, 3, 5, 7, 11};
    primes[0] = 10;

    std::cout << "primes index[0]: " << primes[0] << "\n";
    std::cout << "primes index[1]: " << primes[1] << "\n";
    std::cout << "sum of the 5 primes is: " << primes[0] + primes[1] + primes[2] + primes[3] + primes[4] << "\n";

    std::cout << "An int is " << sizeof(int) << " bytes\n";
    std::cout << &(primes[0]) << '\n';
    std::cout << &(primes[1]) << '\n';
    std::cout << &(primes[2]) << '\n';
    std::cout << &(primes[3]) << '\n';

    std::vector<int> datos(10); // it creates a vector with 10 elements with value 0;
    std::vector<int> data{};    // it creates a vector with 0 data

    const std::vector nums2{1, 3, 6, 6, 12}; // cannot be modified
    // nums2[2] = 10;
    std::cout << "nums2 length: " << nums2.size() << "\n";
    std::cout << "nums2 length: " << std::size(nums2) << "\n";
    // std::cout << "length: " << std::ssize(nums2); // C++20, returns length as a large signed integral type

    std::cout << nums2.at(0) << "\n";
    std::cout << nums2.at(4) << "\n";

    constexpr int index{3};
    std::size_t index2{2};
    std::cout << nums2[index2] << "\n";

    return 0;
}