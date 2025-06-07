#include <iostream>

/**
 * @brief Generates and prints a random integer between 1 and 6.
 *
 * This function seeds the random number generator with the current time,
 * generates a random number in the range [1, 6], and outputs it to the console.
 */
int main(){

    srand(time(NULL));

    for (size_t i = 0; i < 3; i++)
    {
        int num = (rand() % 6) + 1;
        std::cout << num << "\n";    
    }

}