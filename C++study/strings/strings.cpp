#include <iostream>
#include <string>

int main()
{
    std::cout << "Pick 1 or 2: ";
    int choice{};
    std::cin >> choice;

    std::cout << "Now enter your name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello, " << name << ", you picked " << choice << '\n';

    int lenght {static_cast<int>(name.length())};
    std::cout << "The word " << name << " has " << lenght << " letters\n";

    return 0;
}