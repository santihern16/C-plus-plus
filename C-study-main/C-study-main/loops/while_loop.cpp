#include <iostream>
#include <algorithm>

void printNumbers(int start, int end)
{
    if (start > end)
    {
        std::cout << "Fatal Error Crash, your Start number is higher than your End number" << std::endl;
        return;
    }
    else
    {
        while (start <= end)
        {
            std::cout << start << "\n";
            start++;
        }
    }
}

void askNumbers(int& start, int& end)
{
    std::cout << "Start number: ";
    if(!(std::cin >> start)){
        std::cout << "Invalid input. Please enter a valid integer." << std::endl;
        exit(1);
    }

    std::cout << "End number: ";
    if(!(std::cin >> end)){
        std::cout << "Invalid input. Please enter a valid integer." << std::endl;
        exit(1);
    }
}

int main()
{
    int start{0};
    int end{0};
    std::string question{};

    do
    {
        askNumbers(start, end);
        printNumbers(start, end);
        std::cout << "Press E to exit. Other to continue: ";
        std::cin >> question;
    } while (question != "e" && question != "E");

    return 0;
}