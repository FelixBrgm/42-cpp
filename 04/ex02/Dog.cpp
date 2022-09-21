
# include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << this->type << " has been created." << std::endl;
	this->brain = new Brain();
}

Dog::Dog(Dog const & copy)
{
	this->type = "Dog";
	std::cout << this->type << " has been created. --> Copy" << std::endl;
	this->brain = new Brain(*copy.brain);
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

void Dog::setIdea(std::string idea, int num)
{
	this->brain->setIdea(num, idea);
}

std::string Dog::getIdea( int num) const
{
	return (this->brain->getIdea(num));
}

void	Dog::makeSound( void ) const
{
	std::cout << "wuff wuff" << std::endl;
}