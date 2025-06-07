#include <iostream>


struct Date
{
    int day{};
    int month{};
    int year{};

    void print() const // const member function
    { 
        std::cout << day << "/" << month << "/" << year << "\n";
    }
};

void doSomething(const Date& date){
    date.print();
}

int main() {
    const Date today{23,03, 25}; // using const Must be initialized 
    Date yesterday{22, 03, 25}; // using object without const

    today.print(); // in order to use a member function with a const object, we must use const when declaring the member function
    yesterday.print(); // can use the const member function
    doSomething(today);

    return 0;
}