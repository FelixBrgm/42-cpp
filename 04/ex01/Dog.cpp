
# include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << this->type << " has been created." << std::endl;
}

Dog::Dog(Dog const & copy)
{
	this->type = "Dog";
	this->brain = new Brain(*copy.brain);
	std::cout << this->type << " has been created. --> Copy" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << this->type << " has been destroyed." << std::endl;
}

void	Dog::operator= (Dog const & src)
{
	this->type = src.type;
}

void	Dog::makeSound( void ) const
{
	std::cout << "wuff wuff" << std::endl;
}