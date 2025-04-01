//Escribe un programa que pida al usuario dos números enteros y realice las operaciones básicas (+, -, *, /, %) mostrando los resultados en pantalla.

#include <iostream>

int main(){

    float num1, num2;
    std::cout << "First number : ";
    std::cin >> num1;
    std::cout << "Second number : ";
    std::cin >> num2;

    float suma = num1 + num2;
    float resta = num1 - num2;
    float multi = num1 * num2;
    float div = num1 / num2;
    int modular = static_cast<int>(num1) % static_cast<int>(num2);

    std::cout << num1 << " + " << num2 << " = " << suma << "\n";
    std::cout << num1 << " - " << num2 << " = " << resta << "\n";
    std::cout << num1 << " * " << num2 << " = " << multi << "\n";
    std::cout << num1 << " / " << num2 << " = " << div << "\n";
    std::cout << static_cast<int>(num1) << " % " << static_cast<int>(num2) << " = " << modular << "\n";

}