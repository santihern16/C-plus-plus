//Escribe un programa que pida una cadena de caracteres y cuente 
//cuántas vocales (a, e, i, o, u) tiene usando un for y un if.

#include <iostream>
#include <string>

int main(){

    std::string cadena;
    int contador_vocales{0};

    std::cout << "Ingrese la cadena: ";
    std::cin >> cadena;

    for(char c : cadena){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                contador_vocales++;
        }
    }

    std::cout << "La cadena tiene " << contador_vocales << " vocales.\n";

}