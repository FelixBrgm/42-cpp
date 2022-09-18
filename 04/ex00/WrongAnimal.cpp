
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "not defined WrongAnimal";
	std::cout << "WrongAnimal has been created." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & copy)
{
	*this = copy;
	std::cout << "WrongAnimal has been created. --> Copy" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal has been destroyed." << std::endl;
}

void	WrongAnimal::operator= (WrongAnimal const & src)
{
	this->type = src.type;
}

std::string	WrongAnimal::getType( void) const { return (this->type); }

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "* unidentifiable WrongAnimal sound *" << std::endl;
}
