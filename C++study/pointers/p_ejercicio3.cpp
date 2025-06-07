//Crea una función que reciba un puntero a un array de enteros y su tamaño, y devuelva la suma de sus elementos.

#include <iostream>
using namespace std;

// Tu función aquí
int sumArray(int *arr, int tam){
    int suma{0};
    for(int i = 0; i<tam; i++){
        suma +=arr[i];
    }
    return suma;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tam = 5;

    int resultado = sumArray(numeros, tam);  // Aquí debes almacenar el resultado de la función

    cout << "Suma del array: " << resultado << endl;
    return 0;
}