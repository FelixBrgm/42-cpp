
# include "Dog.hpp"

//  -------------- CONSTRUCTORS & DESTRUCTOR ----------------
Dog::Dog()
{
	this->type = "Dog";
	std::cout << this->type << " has been created." << std::endl;
}

Dog::Dog(Animal const & copy)
{
	*this = copy;
	std::cout << this->type << " has been created. --> Copy" << std::endl;
}

Dog::~Dog()
{
	std::cout << this->type << " has been destroyed." << std::endl;
}

//  ----------------------- OPERATOR OVERLOAD -------------
void	Dog::operator= (Animal const & src)
{
	this->type = src.getType();
}

//  ----------------------- METHODS -----------------------
void	Dog::makeSound( void ) const
{
	std::cout << "wuff wuff" << std::endl;
}