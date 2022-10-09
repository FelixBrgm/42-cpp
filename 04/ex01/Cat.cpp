
# include "Cat.hpp"


//  -------------- CONSTRUCTORS & DESTRUCTOR ----------------
Cat::Cat(): Animal("Cat")
{
	this->brain = new Brain();
	std::cout << this->type << " has been created." << std::endl;
}

Cat::Cat(Cat const & copy): Animal(copy)
{
	this->brain = new Brain();
	*this = copy;
	std::cout << this->type << " has been created. --> Copy" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << this->type << " has been destroyed." << std::endl;
}

//  ----------------------- OPERATOR OVERLOAD -------------
void	Cat::operator= (Cat const & src)
{
	this->brain->setIdeas(src.brain->getIdeas());
}

//  ----------------------- METHODS -----------------------

Brain		*Cat::getBrain( void ) const { return (this->brain); }

std::string	Cat::getIdea(int idx) const { return (this->brain->getIdea(idx)); }

void		Cat::setBrain( Brain *new_brain) { this->brain->setIdeas(new_brain->getIdeas()); }

void		Cat::setIdea(std::string idea, int idx) { this->brain->setIdea(idx, idea); }

void	Cat::makeSound( void ) const
{
	std::cout <<"meow meow" << std::endl;
}