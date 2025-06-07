#include <iostream>
#include <vector>

void passByRef(const std::vector<int> &arr)
{
    std::cout << arr[0] << std::endl;
}

int main()
{
    std::vector<int> myArray{2, 4, 6, 8, 10};
    passByRef(myArray);

    std::vector<char> espacios(9, ' ');
    
    std::cout << myArray[0] << std::endl;
    return 0;
}