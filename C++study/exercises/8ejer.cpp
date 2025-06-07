//Escribe un programa que pida un número entero positivo y calcule la suma de todos los números desde 1 hasta ese número usando un for.

#include <iostream>

int main(){

    int num{0};
    int suma{0};
    std::cout << "Numero: ";
    std::cin >> num;

    for(int i=1; i <= num; i++){
        suma = suma + i;
    }

    std::cout << "Suma de los numeros: " << suma << std::endl;

    return 0;
}