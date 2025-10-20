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
*/


/**
 * @brief Prompt the user to enter how many numbers they want to operate on and validate the input.
 *
 * This function prints a prompt to std::cout and attempts to read an unsigned integer
 * value into the reference parameter @p count from std::cin. It validates that the
 * extraction succeeded and that the entered value is greater than zero.
 *
 * On failure to parse a numeric value, the function:
 *  - prints an error message,
 *  - clears the std::cin error state,
 *  - discards up to 10,000 characters or until a newline from the input buffer,
 *  - and returns false.
 *
 * If a numeric value is read but equals zero, the function prints an error message
 * and returns false (the value of @p count will be zero in this case).
 *
 * On success, @p count is set to the entered positive value and the function returns true.
 *
 * @param[out] count Reference to a size_t that will receive the user-entered count on success.
 * @return true if a positive count was successfully read from input; false otherwise.
 */
bool getValidCount(size_t &count)
{
    std::cout << "How many numbers do you want to operate?\n:";
    if (!(std::cin >> count))
    {
        std::cout << "Invalid input\n";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return false;
    }

    if (count == 0)
    {
        std::cout << "The number must be greater than 0\n";
        return false;
    }
    return true;
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
    float total{0};
    for (auto &&i : numbers)
    {   
        total += i;
    }
    return total;
}

bool askNumber(std::vector<float> &numbers)
{
    float num{0};
    std::cout << "Add a number: " << std::endl;
    if (std::cin >> num)
    {
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

int main()
{
    std::vector<float> numbers;

    std::cout << "Calculator App" << std::endl;

    size_t option;
    std::cout << "Choose your operation\n 1. Sum\n:";
    std::cin >> option;

    switch (option)
    {
    case 1:
    {
        size_t count{0};        
        if (!getValidCount(count))
        {
            break;
        }        
        
        for (size_t i = 0; i < count; i++)
        {
            if (!askNumber(numbers))
            {
                i--;
            }           
        }
        std::cout << "Result Sum: " << sum(numbers) << std::endl;
        break;
    }
    default:
        std::cout << "Choose a valid option\n";
        break;
    }
    return 0;
}