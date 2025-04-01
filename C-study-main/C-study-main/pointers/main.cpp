#include <iostream>

int main(){

    std::cout << "POINTERS//PUNTEROS\n";
    std::cout << "sizeof(int*): " << sizeof(int*) << std::endl; //8 bytes
    std::cout << "sizeof(double*): " << sizeof(double*) << std::endl; //8 bytes
    
    //variable
    int variable{10};
    
    //Inicializing a pointer
    int *ptr{&variable}; 
    int *ptr2{nullptr}; //declaring null pointer

    std::cout << "Value of variable: " << variable << "\n";
    std::cout << "Value of variable (memory): " << &variable << "\n";
    std::cout << "Value of ptr (memory): " << ptr << "\n";
    std::cout << "Value of *ptr (value): " << *ptr << "\n";

    //re-declaring
    int variable2{20};
    ptr = &variable2;

    std::cout << "New Value of ptr (memory): " << ptr << "\n";
    std::cout << "New value of *ptr (value): " << *ptr << "\n";

    //modyfing the values of *ptr
    *ptr += 10;
    std::cout << "Modified value of *ptr (value): " << *ptr << "\n";

    return 0;
}