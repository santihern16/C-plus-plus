#include <iostream>
#include <cstdlib>

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
int main()
{
    int num;
    int guess;
    int try_number;

    std::cout << "****NUMBER GUESSING GAME****\n";
    srand(time(0));
    num = (rand() % 100) + 1;

    do
    {
        std::cout << "Guess the number!: ";
        std::cin >> guess;

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