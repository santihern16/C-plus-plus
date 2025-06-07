#include <iostream>
#include <array>

int main(){

    std::array<int, 5>myinsts = {1, 2, 3, 65, 3};
    std::array<char, 5>message = {'h', 'e', 'l', 'l', 'o'};

    myinsts[2] = 10; //modyfing the value of the position 2 array
    
    std::cout << "Size of myInts: " << myinsts.size() << "\n";
    std::cout << "Size of message: " << message.size() << "\n";
    std::cout << "Sizeof(myInts): " << sizeof(myinsts) << "\n"; //size of the array in bytes

    std::cout << "My array contains: \n";

    for(auto i: myinsts) std::cout << "Element : " << i << "\n";

    for(int i = 0; i<myinsts.size(); i++){
        std::cout << "Elementoooo : " << myinsts[i] << "\n";
    }

    std::cout << "My message contains: ";

    for(auto c: message){
        std::cout << c;
    }

    std::cout << std::endl;
    return 0;
}