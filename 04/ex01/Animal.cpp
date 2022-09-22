#include "Animal.hpp"

Animal::Animal()
{
	this->type = "not defined Animal";
	this->brain = new Brain();
	std::cout << "Animal has been created." << std::endl;
}

Animal::Animal(Animal const & copy)
{
	*this = copy;
	this->brain = new Brain(*copy.brain);
	std::cout << "Animal has been created. --> Copy" << std::endl;
}

Animal::~Animal()
{
	delete this->brain;
	std::cout << "Animal has been destroyed." << std::endl;
}

void	Animal::operator= (Animal const & src)
{
	this->type = src.type;
	this->brain = src.brain;
}

std::string	Animal::getType( void) const { return (this->type); }

void	Animal::makeSound( void ) const
{
	std::cout << "* unidentifiable animal sound *" << std::endl;
}