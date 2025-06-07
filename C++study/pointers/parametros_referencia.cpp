#include <iostream>

/**
 * @brief Modifies the given integer by reference, setting its value to 10.
 *
 * @param num Reference to an integer variable to be modified.
 */
void modificar(int &num)
{
    num = 10;
}

/**
 * @brief Intercambia los valores de dos cadenas de texto que representan tazas.
 *
 * Esta función recibe dos referencias a objetos std::string y realiza el intercambio
 * de sus valores. El intercambio se realiza utilizando una variable auxiliar.
 *
 * @param taza1 Referencia a la primera taza (std::string) que será intercambiada.
 * @param taza2 Referencia a la segunda taza (std::string) que será intercambiada.
 */
void modificarTaza(std::string &taza1, std::string &taza2)
{
    std::string tazaAux;

    tazaAux = taza1;
    taza1 = taza2;
    taza2 = tazaAux;
}

/*
 * Main function demonstrating parameter passing by reference.
 *
 * - Declares an integer variable `num` and initializes it to 0.
 * - Declares two string variables, `taza1` ("Cafe") and `taza2` ("Agua").
 * - Calls `modificar(num)` to modify the value of `num` (presumably by reference).
 * - Calls `modificarTaza(taza1, taza2)` to modify the values of `taza1` and `taza2` (presumably by reference).
 * - Outputs the values of `num`, `taza1`, and `taza2` to standard output.
 * - Returns 0 to indicate successful program termination.
 */
int main()
{
    int num{0};

    std::string taza1{"Cafe"};
    std::string taza2{"Agua"};

    modificar(num);
    modificarTaza(taza1, taza2);

    std::cout << num << std::endl;
    std::cout << taza1 << std::endl;
    std::cout << taza2 << std::endl;

    return 0;
}