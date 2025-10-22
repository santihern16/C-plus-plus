#include <iostream>
#include <vector>
/*
What I need
Sum, Rest, Div, Mult
+, -, /, *
Numbers

Example:
num1 * num2 + num3 = result
Gotta have in count the operations order

div:
    num1 / num2 / num3 = result
*/


/**
 * Prompt the user for how many numbers they want to operate on and validate the response.
 *
 * This function:
 *  - Prompts the user via std::cout.
 *  - Attempts to read a size_t from std::cin.
 *  - If extraction fails (non-numeric input), prints an error message, clears std::cin state,
 *    and returns 0.
 *  - After a successful extraction, discards up to 10000 characters or until a newline from
 *    the input buffer (std::cin.ignore) to prevent leftover characters (e.g., a decimal point
 *    and fractional part) from affecting subsequent input operations.
 *  - If the entered count is 0, prints an error message and returns 0.
 *
 * Side effects:
 *  - Writes prompts and error messages to std::cout.
 *  - Reads from std::cin and may call std::cin.clear() and std::cin.ignore().
 *
 * Returns:
 *  - A positive size_t representing the validated count on success.
 *  - 0 if input extraction fails or if the user enters 0.
 */
size_t getValidCount()
{
    size_t count{0};
    std::cout << "How many numbers do you want to operate?\n:";
    if (!(std::cin >> count))
    {
        std::cout << "Invalid input\n";
        std::cin.clear();
        return 0;
    }
    std::cin.ignore(10000, '\n'); //Line added outside the if, to clear the input buffer and avoid decimals from going in the next line.

    if (count == 0)
    {
        std::cout << "The number must be greater than 0\n";
        return 0;
    }
    return count;
}

/**
 * @brief Compute the sum of all values in a collection of floats.
 *
 * @param numbers Const reference to a std::vector<float> containing the values to sum.
 *                Passing by const reference avoids copying the container.
 * @return float The total sum of all elements in 'numbers'. Returns 0.0f if the vector is empty.
 *
 * @details The implementation iterates the container using a range-based for loop
 *          and accumulates each element into a local float accumulator.
 *
 * @complexity O(n) time complexity, where n is numbers.size(); O(1) additional space.
 * @thread-safety Callable concurrently only if the referenced vector is not modified
 *                 by other threads during the call.
 */
float sum(const std::vector<float> &numbers) //We pass the value as a reference - Numbers is the ALIAS
{
    if (numbers.empty()) return 0;

    float total{0};
    for (auto &&i : numbers)
    {   
        total += i;
    }
    return total;
}

float subtract(const std::vector<float> &numbers)
{
    if (numbers.empty()) return 0; // empty vector validation

    float total = numbers[0]; // total is the first element
    for (size_t i = 1; i < numbers.size(); ++i) // for loop starts at 1 until the size of numbers
    {
        total -= numbers[i];
    }
    return total;
}

float div(const std::vector<float> &numbers)
{
    if (numbers.empty()) return 0;

    float result = numbers[0];
    for (size_t i = 1; i < numbers.size(); i++)
    {
        result /= numbers[i];
    }
    return result;
}

float mult(const std::vector<float> &numbers)
{
    if (numbers.empty()) return 0;

    float total = numbers[0];
    for (size_t i = 1; i < numbers.size(); i++)
    {
        total *= numbers[i]; 
    }
    return total;
}

bool askNumber(std::vector<float> &numbers)
{
    float num{0};
    std::cout << "Add a number: " << std::endl;
    if (std::cin >> num)
    {
        std::cin.ignore(10000, '\n');//We ignore again the buffer to avoid issues with the input
        numbers.push_back(num);
        return true;
    }
    else
    {
        std::cout << "Invalid number, retrying...\n";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return false;
    }
}

bool exitMenu(const char &option){
    if (option == 'y' || option == 'Y')
    {
        return true;
    }
    return false;
}

int main()
{
    char choice;
    do
    {
    std::vector<float> numbers;

    std::cout << "Calculator App" << std::endl;

    size_t option;
    std::cout << "Choose your operation\n1. Sum\n2. Rest\n3. Multiplication\n4. div\n:";
    std::cin >> option;
    std::cin.ignore(10000, '\n');//We ignore (again) the buffer input
    
    size_t count = getValidCount();

    switch (option)
    {
    case 1:
    {       
        std::cout << "****Sum****\n";
        for (size_t i = 0; i < count; i++)
        {
            if (!askNumber(numbers))
            {
                i--; //If the function returns false, means that it failed, we denied the false to convert it to true and reset the for interaction.
            }           
        }
        std::cout << "Result Sum: " << sum(numbers) << std::endl;
        break;
    }
    case 2:
    {
        std::cout << "****Subtract****\n";     
        for (size_t i = 0; i < count; i++)
        {
            if (!askNumber(numbers))
            {
                i--;
            }
        }
        std::cout << "Result Subtract: " << subtract(numbers) << std::endl;   
        break;
    }
    case 3:
    {
        std::cout << "****Multiplication****\n";
        for (size_t i = 0; i < count; i++)
        {
            if (!askNumber(numbers))
            {
                i--;
            }            
        }
        std::cout << "Result Multiplication: " << mult(numbers) << std::endl;
        break;
    }
    case 4:
    {
        std::cout << "****div****\n";
        for (size_t i = 0; i < count; i++)
        {
            if (!askNumber(numbers))
            {
                i--;
            }   
        }
        std::cout << "Result div: " << div(numbers) << std::endl;
        break;
    }
    
    default:
        std::cout << "Choose a valid option\n";
        break;
    }

    std::cout << "Would you like to continue? (y/n): ";
    std::cin >> choice;

    } while (exitMenu(choice));
    return 0;
}