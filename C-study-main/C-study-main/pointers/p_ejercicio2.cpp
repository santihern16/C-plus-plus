//Escribe una función que reciba un puntero a un entero y doble su valor.

#include <iostream>
using namespace std;

// Tu función aquí

void doubleValue(int *p_num){
    *p_num *= 2;
}

int main() {
    int num = 5;
    cout << "Antes: " << num << endl;

    // Llama a tu función aquí
    doubleValue(&num);

    cout << "Después: " << num << endl;
    return 0;
}
