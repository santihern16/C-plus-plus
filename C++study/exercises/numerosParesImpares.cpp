#include <iostream>
/// 1. Números Pares e Impares
/// Escribe un programa que lea 10 números enteros y determine cuántos son pares y cuántos son impares usando un bucle for.

int main()
{
    size_t count{10};
    size_t numerosPares{0};
    size_t numerosImpares{0};

    for (size_t i = 0; i < count; i++)
    {
        std::cout << "Ingresa un numero: ";
        int num{0};
        std::cin >> num;

        if (num % 2 == 0)
        {
            std::cout << num << " es PAR\n";
            numerosPares++;
        }
        else
        {
            std::cout << num << " es IMPAR\n";
            numerosImpares++;
        }
    }

    std::cout << "\nCantidad de números pares: " << numerosPares << std::endl;
    std::cout << "Cantidad de números impares: " << numerosImpares << std::endl;
}