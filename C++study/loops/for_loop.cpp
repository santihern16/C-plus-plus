#include <iostream>

int main(){
    
    for (size_t i = 0; i < 15; i++)
    {
        if(i == 13){
            continue; //jumps to the next interaction ans skips the specifed value;
        }
        std::cout << i << "\n";
    }
    
    
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            std::cout << "|___|";
        }
        std::cout << "\n";
    }
    
}