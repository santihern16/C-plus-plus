/*
Escribe un programa que pida la edad del usuario y muestre en qué categoría cae:

0-12: Niño
13-17: Adolescente
18-64: Adulto
65+: Anciano
*/

#include <iostream>

int main(){

    unsigned int edad{0};
    std::cout << "Edad: ";
    std::cin >> edad;

    if(edad >= 0 && edad <= 12){
        std::cout << "Es un kid" << "\n";
    }else if (edad >= 13 && edad <= 17)
    {
        std::cout << "Es un adolescente" << "\n";
    }else if (edad >= 18 && edad <= 64)
    {
        std::cout << "Es un adulto" << "\n";
    }else if (edad >= 65 && edad <= 140)
    {
        std::cout << "Es un anciano" << "\n";
    }else{
        std::cout << "Edad Invalida" << "\n";
    }
    
}