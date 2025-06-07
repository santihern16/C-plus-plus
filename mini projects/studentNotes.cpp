#include <iostream>

double ingresarNotas(const int materias)
{
    double sum{0};
    for (size_t i = 0; i < materias; i++)
    {
        double nota;

        std::cout << "Ingrese la nota: ";
        std::cin >> nota;

        sum += nota;
    }

    return sum;
}

int main()
{
    int materias{6};
    double sum = ingresarNotas(materias);
    double average = sum / materias;

    std::cout << "Promedio de este semestre: " << average;
}