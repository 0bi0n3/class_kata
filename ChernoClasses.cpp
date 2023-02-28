// ChernoClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Playerinfo
{
public:
    const int PlayerLevelWarnig{ 0 };
    const int PlayerLevelError{ 1 };
    const int PlayerLevelTrace{ 2 };
private:
    int m_PlayerLevel = PlayerLevelTrace; // m_ shows it is a class member variable.

public:
    void SetLevel(int level)
    {
        m_PlayerLevel = level;
    }

    void Warn(const char* message)
    {
        if (m_PlayerLevel >= PlayerLevelWarnig)
        {
            std::cout << "[WARNING]: " << message << std::endl;
        }
    }

    void Error(const char* message)
    {
        if (m_PlayerLevel >= PlayerLevelError)
        {
            std::cout << "[ERROR]: " << message << std::endl;
        }
    }

    void Information(const char* message)
    {
        if (m_PlayerLevel >= PlayerLevelTrace)
        {
            std::cout << "[INFO]: " << message << std::endl;
        }
    }
};

int main()
{
    Playerinfo playerInfoDetails;
    playerInfoDetails.SetLevel(playerInfoDetails.PlayerLevelWarnig);

    playerInfoDetails.Warn("Warning!");
    playerInfoDetails.Error("Error occured!");
    playerInfoDetails.Information("Here is the info...");


    std::cin.get();
}


