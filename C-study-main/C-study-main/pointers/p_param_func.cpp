#include <iostream>

void modificar(int *ptr){
    *ptr = 50;
}

int main(){
    int number{10};

    std::cout << "Number antes de la funcion: "<< number << std::endl;

    modificar(&number);

    std::cout << "Number despues de la funcion: "<< number << std::endl;

    return 0;
}