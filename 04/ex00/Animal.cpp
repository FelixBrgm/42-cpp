
#include "Animal.hpp"


//  -------------- CONSTRUCTORS & DESTRUCTOR ----------------
Animal::Animal()
{
	this->type = "not defined Animal";
	std::cout << "Animal has been created." << std::endl;
}

Animal::Animal(Animal const & copy)
{
	*this = copy;
	std::cout << "Animal has been created. --> Copy" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal has been destroyed." << std::endl;
}

//  ----------------------- OPERATOR OVERLOAD -------------
void	Animal::operator= (Animal const & src)
{
	this->type = src.type;
}

//  ----------------------- METHODS -----------------------
std::string	Animal::getType( void) const { return (this->type); }

void	Animal::makeSound( void ) const
{
	std::cout << "* unidentifiable animal sound *" << std::endl;
}