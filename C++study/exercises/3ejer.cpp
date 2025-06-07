//Escribe un programa que intercambie los valores de dos variables sin usar una variable auxiliar.

#include <iostream>

int main(){

    int a, b;

    a = 10;
    b = 20;

    std::cout << a << "\n";
    std::cout << b << "\n";

    a += b;
    b = a - b;
    a = a - b;

    std::cout << a << "\n";
    std::cout << b << "\n";
}