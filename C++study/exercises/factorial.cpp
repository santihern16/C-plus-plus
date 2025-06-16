#include <iostream>
// Calculadora de Factorial
// Crea una función que calcule el factorial de un número usando un bucle while. El programa debe pedir un número al usuario y mostrar su factorial.

size_t calcularFactorial(size_t num)
{
    if (num > 20)
    {
        std::cout << "Error: número demasiado grande, el máximo permitido es 20." << std::endl;
        return 0;
    }

    if (num == 0 || num == 1) return 1;

    size_t count{1};
    size_t fact{1};

    while (count <= num)
    {
        fact *= count;
        count++;
    }

    return fact;
}

int main()
{
    std::cout << "Factorial" << std::endl;

    std::cout << "Ingresa un numero para calcular el factorial: ";
    size_t num{0};
    std::cin >> num;

    size_t result = calcularFactorial(num);

    std::cout << num << "! = " << result << std::endl;

    return 0;
}
