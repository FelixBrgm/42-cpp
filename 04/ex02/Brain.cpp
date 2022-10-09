
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain starts thinking." << std::endl;
}

Brain::Brain(Brain const & copy)
{
	*this = copy;
	std::cout << "Brain starts thinking. --> Copy" << std::endl;
}

Brain	&Brain::operator= (Brain const & src)
{
	for (int i = 0; i < 100; i++ )
		this->ideas[i] = src.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain stops thinking" << std::endl;
}

void Brain::setIdea(int num, std::string idea)
{
	this->ideas[num] = idea;
}

std::string Brain::getIdea(int num) const
{
	return (this->ideas[num]);
}

void Brain::setIdeas( std::string ideas[] )
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ideas[i];
}

std::string *Brain::getIdeas( void )
{
	return (this->ideas);
}