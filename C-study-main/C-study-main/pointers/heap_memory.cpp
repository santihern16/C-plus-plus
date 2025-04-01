#include <iostream>

int main(){

    std::cout << "Dinamyc Memory Allocation (heap): " << std::endl;

    int *ptr = new int(10); // asignamos un espacio de memoria en el heap

    //forma 2 de asignar

    int *ptr2{nullptr}; //iniciamos puntero null
    ptr2 = new int; // lo hacemos dinamico

    //forma 3 de asignar
    int *ptr3{new int{23}};//uniform
    delete ptr3;

    *ptr2 = 50;
    std::cout << "Valor *ptr2: " << *ptr2 << "\n";

    std::cout << "Memory ptr: " << ptr << "\n";
    std::cout << "Valor antes de modificar *ptr: " << *ptr << "\n";

    *ptr = 20;

    std::cout << "Valor antes de modificar *ptr: " << *ptr << "\n";
    std::cout << "Memory ptr: " << ptr << "\n";

    delete ptr; //Liberamos la memoria
    delete ptr2; // liberamos memoria
    ptr = nullptr; //lo volvemos a hacer nulo para evitar errores por si lo usamos otra vez

    return 0;
}