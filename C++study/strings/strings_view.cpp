#include <iostream>
#include <string_view>

void printString(std::string_view s){
    std::cout << s << std::endl;
}

int main() {

    std::string name {"Santiago"}; // hace una copia
    name.append(" Hernandez");
    std::cout << name << std::endl;

    std::string sExample{"Ejemplo1"};
    std::string_view svExample{sExample}; // apunta a la direccion de sExample
    std::cout << svExample << std::endl; // imprime esa direccion

    svExample = "Ejemplo apuntando"; // no modifica el valor, cambia la direccion a la que apunta
    std::cout << svExample << std::endl; //imprime la nueva direccion

    std::cout << sExample << std::endl; // muestra el original

    std::cout << std::string_view{name} << std::endl; // no crea una copia, solo apunta a la direccion de memoria de name

    //std::string s{"testing"};
    std::string_view s{"testing"}; 
    printString(s);

    using namespace std::string_literals; // activa el sufijo s
    using namespace std::string_view_literals; // activa el sufijo sv

    std::cout << "foo\n"; // cadena de texto literal estilo-C
    std::cout << "foo\n"s; // cadena de texto std::string_literal
    std::cout << "foo\n"sv; // cadena de texto std::string_view_literal

    constexpr std::string_view ejem {"Hola mundooo"};
    std::cout << ejem << std::endl;
    return 0;
}