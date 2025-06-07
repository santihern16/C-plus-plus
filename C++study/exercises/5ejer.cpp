//Escribe un programa que solicite un número al usuario y 
//determine si es par o impar usando el operador %.

#include <iostream>

int main(){
    unsigned int number{0};

    std::cout << "Number: ";
    std::cin >> number;
    
    std::cout << number%2 << "\n";
    
    if(number%2 == 0){
        std::cout << "Numero par." << "\n";
    }else if (number%2 == 1)
    {
        std::cout << "Numero impar." << "\n";
    }else{
        std::cout << "Numero invalido" << "\n";
    }
    
}