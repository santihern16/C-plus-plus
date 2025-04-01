//Escribe un programa que almacene 10 números en un array y determine cuál es el número más grande.

#include <iostream>
#include <array>

int main(){

    std::array<int, 10>numeros = {2, 3, 5, 7, 10, 4, 5, 12, 8, 4};

    int num_max = numeros[0];

    for (auto i : numeros)
    {
        if (i > num_max)
        {
            num_max = i;   
        }        
    }

    std::cout << "El número más grande es: " << num_max << "\n";

    
}