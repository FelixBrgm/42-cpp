# include "Ice.hpp"

//  -------------- CONSTRUCTORS & DESTRUCTOR ----------------

Ice::Ice()
{
	this->type_ = "ice";
}

Ice::Ice(AMateria const & copy)
{
	*this = copy;
	return;
}

Ice::~Ice(){}


Ice &Ice::operator=(AMateria const & src)
{
	if (this == &src)
		return (*this);
	return( *this);
}

//  -------------- METHODS ----------------

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
