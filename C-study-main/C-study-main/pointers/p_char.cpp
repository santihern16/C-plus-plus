#include <iostream>

int main(){
    char *p_charr{nullptr};
    char letra{'S'};

    std::cout << letra << std::endl;

    p_charr = &letra;
    *p_charr = 'X';

    std::cout << letra << std::endl;
}