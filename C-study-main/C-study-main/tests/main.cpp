#include <iostream>
#include <cassert>

bool esVocalMinuscula (char c){
    switch (c)
    {
    case 'a': case 'e': case 'i': case 'o': case 'u':
        return true;    
    default:
        return false;
    }
}

void TestVocalOLetra(){
    assert(esVocalMinuscula('a'));
    assert(esVocalMinuscula('e'));
    assert(esVocalMinuscula('i'));
    assert(esVocalMinuscula('o'));
    assert(esVocalMinuscula('u'));

    assert(!esVocalMinuscula('b'));
    assert(!esVocalMinuscula('1'));
    assert(!esVocalMinuscula('!'));
    assert(!esVocalMinuscula('Z'));

    std::cout << "All test were succesfull" << std::endl;

}

int main() {
    char letra{'b'};

    std::cout << "Testing..." << std::endl;
    TestVocalOLetra();

    return 0;
}