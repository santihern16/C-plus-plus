//Escribe un programa que pida un número del 1 al 7 y
//muestre el día de la semana correspondiente usando switch.

#include <iostream>

int main(){

    int num{0};

    std::cout << "Numero del 1 al 7: ";
    std::cin >> num;

    switch (num)
    {
    case 1:
        std::cout << "Lunes.\n";
        break;
    case 2:
        std::cout << "Martes.\n";
        break;
    case 3:
        std::cout << "Miercoles.\n";
        break;
    case 4:
        std::cout << "Jueves.\n";
        break;
    case 5:
        std::cout << "Viernes.\n";
        break;
    case 6:
        std::cout << "Sabado.\n";
        break;
    case 7:
        std::cout << "Domingo.\n";
        break;
    default:
        std::cout << "Dia invalido.\n";
        break;
    }

}