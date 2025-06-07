#include <iostream>

//Lo mejor es crear una struct Animal que herede name y num a otras Struct como Dog, Cat
struct Cat
{
    std::string_view name{"Cat"};
    int numLegs{4};
};

struct Dog
{
    std::string_view name{"Dog"};
    int numLegs{4};
};

struct Snake
{
    std::string_view name{"Snake"};
    int numLegs{0};
};

struct Date
{
    int day{};
    int month{};
    int year{};

    void printDate(const Date& date){
        std::cout << date.day << "/" << date.month << "/" << date.year << "\n"; // Member function (method)
    }
};

void printAnimal(const Dog& animal){
    std::cout << "A " << animal.name << " has " << animal.numLegs << " Legs.\n";
}

namespace Foo{
    void printHi() {std::cout << "Hi World\n";}
};


int main() {
    std::cout << "Scructs/Estructuras." << std::endl;

    constexpr Dog animal;
    printAnimal(animal);

    Date date{22, 3, 25};
    date.day = 10; //modificando el valor de day
    date.printDate(date);

    Foo::printHi();

    return 0;
}