
# include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << this->type << " has been created." << std::endl;
}

Cat::Cat(Cat const & copy)
{
	*this = copy;
	std::cout << this->type << " has been created. --> Copy" << std::endl;
}

Cat::~Cat()
{
	std::cout << this->type << " has been destroyed." << std::endl;
}

void	Cat::operator= (Cat const & src)
{
	this->type = src.type;
}

void	Cat::makeSound( void ) const
{
	std::cout <<"meooowww meoowww" << std::endl;
}