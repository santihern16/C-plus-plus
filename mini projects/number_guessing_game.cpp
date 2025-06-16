#include <iostream>
#include <cstdlib>
#include <limits>
#include <random>

constexpr std::size_t MAX_CHARS{10000};
constexpr std::size_t NUM_MIN{1};
constexpr std::size_t NUM_MAX{100};

/**
 * @brief Entry point for the Number Guessing Game.
 *
 * This function implements a simple number guessing game where the program randomly selects
 * a number between 1 and 100, and the user attempts to guess it. After each guess, the program
 * provides feedback indicating whether the guess was too high, too low, or correct. The game
 * continues until the user guesses the correct number, at which point the total number of tries
 * is displayed.
 *
 * @return int Exit status of the program.
 */

int generateRandomNumber()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(NUM_MIN, NUM_MAX);

    return distrib(gen);
}

void userGuess()
{
    int guess{0};
    int try_number{0};
    int num = generateRandomNumber();

    do
    {
        std::cout << "Guess the number!: ";

        if (!(std::cin >> guess))
        {
            std::cout << "Please enter a valid number between 1 and 100!" << std::endl;
            std::cin.clear(); // Limpiar el error
            // version compleja de: Descarta todos los caracteres hasta encontrar un Enter
            // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Versión más simple de ignore (descarta hasta 1000 caracteres o hasta Enter)
            std::cin.ignore(MAX_CHARS, '\n');

            continue;
        }

        try_number++;

        if (guess > num)
        {
            std::cout << "Too high!\n";
        }
        else if (guess < num)
        {
            std::cout << "Too low!\n";
        }
        else
        {
            std::cout << "Correct!\nNumber of tries: " << try_number << "\n";
        }

    } while (guess != num);
}

int main()
{
    std::cout << "****NUMBER GUESSING GAME****\n";
    userGuess();
}