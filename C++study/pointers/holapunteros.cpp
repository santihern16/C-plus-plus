#include <iostream>
#include <array>

int main() {
    std::cout << "Hola mundooo hahaha" << std::endl;
    
    std::string pizzasGratis[5] = {
        "Pepperoni",
        "Hawaiana",
        "Vegetariana",
        "Cuatro Quesos",
        "Barbacoa"
    };

    std::array<int, 3> numbers = {1, 2, 3};

    std::cout << pizzasGratis << std::endl;
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
