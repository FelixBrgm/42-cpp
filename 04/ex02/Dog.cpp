
# include "Dog.hpp"

//  -------------- CONSTRUCTORS & DESTRUCTOR ----------------
Dog::Dog(): Animal("Dog")
{
	this->brain = new Brain();
	std::cout << this->type << " has been created." << std::endl;
}

Dog::Dog(Dog const & copy): Animal(copy)
{
	this->brain = new Brain();
	*this = copy;
	std::cout << this->type << " has been created. --> Copy" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << this->type << " has been destroyed." << std::endl;
}

//  ----------------------- OPERATOR OVERLOAD -------------
void	Dog::operator= (Dog const & src)
{
	this->brain->setIdeas(src.brain->getIdeas());
}

//  ----------------------- METHODS -----------------------

Brain		*Dog::getBrain( void ) const { return (this->brain); }

std::string	Dog::getIdea(int idx) const { return (this->brain->getIdea(idx)); }

void		Dog::setBrain( Brain *new_brain) { this->brain->setIdeas(new_brain->getIdeas()); }

void		Dog::setIdea( int idx, std::string idea) { this->brain->setIdea(idx, idea); }

void	Dog::makeSound( void ) const
{
	std::cout << "wuff wuff" << std::endl;
}