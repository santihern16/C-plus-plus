#include <iostream>
#include <ctime>

int main() {

    srand(time(0));

    int num = (rand() % 5) + 1;

    switch (num)
    {
    case 1:
        std::cout << "Ganaste un descuento del 10%!\n";
        break;
    case 2:
        std::cout << "Ganaste una foto con Shakira de peluche!\n";
        break;    
    case 3: 
        std::cout << "Ganaste una entrada a la feria!\n";
        break;
    case 4:
        std::cout << "Ganaste un viaje a LA!\n";
        break;
    case 5:
        std::cout << "Ganaste 1 millon de dolares!\n";
        break;
    }

}