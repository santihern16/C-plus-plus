//Escribe un programa que pida al usuario un número flotante 
//y lo muestre con solo dos decimales usando setprecision.

#include <iostream>
#include <iomanip>

int main(){

    float num{0};

    std::cout << "Number: ";
    std::cin >> num;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << num << std::endl;

}