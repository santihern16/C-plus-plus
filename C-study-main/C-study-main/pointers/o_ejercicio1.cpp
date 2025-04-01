//Crea una función que reciba dos punteros a enteros e intercambie sus valores.

#include <iostream>

// Tu función aquí

void function(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 5, b = 10;
    std::cout << "Antes: a = " << a << ", b = " << b << std::endl;
    
    // Llama a tu función aquí
    function(&a, &b);

    std::cout << "Después: a = " << a << ", b = " << b << std::endl;
    return 0;
}