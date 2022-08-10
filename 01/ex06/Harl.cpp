#include "Harl.hpp"
#include <tuple>

int getId(std::string level);

Harl::Harl()
{

}

Harl::~Harl()
{
    
}
void Harl::complain(std::string level)
{
    const int i = getId(level);
    switch (i)
    {
    case 0:
        error();
        break;
    case 1:
        warning();
        break;
    case 2:
        info();
        break;
    case 3:
        debug();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}
int getId(std::string level)
{
    std::string levels[] = {
        "ERROR",
        "WARNING",
        "INFO",
        "DEBUG",
    };
    for (int i = 0; i < 4; i++)
        if (level == levels[i])
            return (i);
    return (-1);
}

void Harl::debug(void)
{
    std::cout << "[DEBUG]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
    info();
}

void Harl::info(void)
{
    std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl;
    warning();
}

void Harl::warning(void)
{
    std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
    error();
}

void Harl::error(void)
{
    std::cout << "[ERROR]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

