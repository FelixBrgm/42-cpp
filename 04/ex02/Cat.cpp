
# include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << this->type << " has been created." << std::endl;
	this->brain = new Brain();
}

Cat::Cat(Cat const & copy)
{
	this->type = "Cat";
	std::cout << this->type << " has been created. --> Copy" << std::endl;
	this->brain = new Brain(*copy.brain);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << this->type << " has been destroyed." << std::endl;
}

void	Cat::operator= (Cat const & src)
{
	this->type = src.type;
	this->brain = src.brain;
}

void Cat::setIdea(std::string idea, int num)
{
	this->brain->setIdea(num, idea);
}

std::string Cat::getIdea( int num) const
{
	return (this->brain->getIdea(num));
}

void	Cat::makeSound( void ) const
{
	std::cout <<"meow meow" << std::endl;
}