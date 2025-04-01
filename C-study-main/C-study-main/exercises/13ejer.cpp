//Escribe un programa que almacene 7 números en un array y luego pida al usuario un número para verificar si está en el array.

#include <iostream>
#include <array>

int main(){

    int num;
    bool encontrado = false;
    std::array<int, 7>numeros = {1, 2, 3, 4, 5, 6, 7};


    std::cout << "Ingresa un numero para verificar que esta en el array: ";
    std::cin >> num;

    for (auto i : numeros)
    {
        if (num == i)
        {
            std::cout << "Numero encontrado: " << num << "\n";
            encontrado = true;
            break;
        }    
    }

    if (!encontrado)
    {
        std::cout << "Numero NO encontrado: " << num << "\n";
    }

}