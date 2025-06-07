//Escribe un programa que pida un número y muestre su tabla de multiplicar
// del 1 al 10 usando un while.

#include <iostream>

int main(){

    int num{0};
    int cont{1};

    std::cout << "Numero: ";
    std::cin >> num;

    while (cont <= 15)
    {
        std::cout << num << " * " << cont << " = " << num*cont << "\n";
        cont++;
    }

}
