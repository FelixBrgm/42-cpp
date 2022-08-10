#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return (1);
    std::string logLevel(argv[1]);

    Harl h;
    h.complain(logLevel);
}