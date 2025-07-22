#include <iostream>

int main() 
{
    size_t num{0};

    std::cout << "Ingresa un numero para calcular la multiplicacion: ";
    std::cin >> num;

    size_t count{11};
    int result{0};
    for (size_t i = 1; i < count; i++)
    {
        result = num * i;
        std::cout << num << " * " << i << " = " << result << "\n";
    }

    return 0;
}