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