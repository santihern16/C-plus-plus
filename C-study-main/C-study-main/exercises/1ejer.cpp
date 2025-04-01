//Escribe un programa que convierta una temperatura de grados Celsius a Fahrenheit.

#include <iostream>

int main(){

    float celsius{0};

    std::cout << "Temperature in celcius: ";
    std::cin >> celsius;
    std::cout << "\n";

    float fahrenheit = (celsius * (9.0/5.0)) + 32.0;

    std::cout << "Temperature in fahrenheit: " << fahrenheit << "\n";

    return 0;
}