//Escribe un programa que pida al usuario 5 números y los almacene en un array. Luego, muestra los elementos en orden inverso.
#include <iostream>
#include <array>

int main(){

    std::array<int, 5>numeros;

    for (auto i = 0; i < 5; i++)
    {
        std::cout << "Ingresa el numero [" << i  << "]: ";
        std::cin >> numeros[i];
    }

    std::cout << "Los numeros en orden inverso son:\n";
    for (auto i = numeros.rbegin(); i != numeros.rend(); i++)
    {
        std::cout << *i << "\n";// Desreferenciamos el iterador para obtener el valor
    }

}