// ChernoClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Player
{
public:
    char input;
    void getPlayerDecision(char input)
    {
        if (input == 'L')
        {
            std::cout << "You chose left!\n";

        }
        else if (input == 'R')
        {
            std::cout << "You chose right!\n";
        }
        else
        {
            std::cout << "invalid choice!\n";
        }
    }
};

int main()
{
    char PlayerInput;
    Player player1;
    std::cout << "Hello World!\n";
    std::cout << "Do you want to move left or right?\n";
    std::cin >> PlayerInput;
    
    player1.getPlayerDecision(PlayerInput);

    std::cin.get();
}


