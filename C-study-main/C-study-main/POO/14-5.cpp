#include <iostream>

class Person{
private:
    std::string m_name{};

public:
    void setName(std::string name){
        m_name = name;
    }

    void kiss(const Person& p){
        std::cout << m_name << " Kisses " << p.m_name << "\n"; 
    }
};

int main() {
    std::cout << "Leccion 14.5" << std::endl;

    Person joe;
    joe.setName("Joe");

    Person mary;
    mary.setName("Mary");

    joe.kiss(mary);
    mary.kiss(joe);

    return 0;
}