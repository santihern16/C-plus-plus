//Escribe un programa que solicite al usuario 5 números enteros, los almacene en un array y luego calcule la suma de todos los elementos.

#include <iostream>
#include <array>

int main(){

    int num1, num2, num3, num4, num5;
    int suma{0};
    std::array<int, 5>numbers;

    for (int i = 0; i < numbers.size(); i++)
    {
        std::cout << "Ingresa numero " << i + 1 << " :";
        std::cin >> numbers[i];
        suma += numbers[i];
    }     
    
    std::cout << "\n";
    
    std::cout << "La suma de todos los numeros es: " << suma << "\n";

}