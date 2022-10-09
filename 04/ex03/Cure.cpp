# include "Cure.hpp"

//  -------------- CONSTRUCTORS & DESTRUCTOR ----------------

Cure::Cure()
{
	this->type_ = "cure";
}

Cure::Cure(AMateria const & copy)
{
	*this = copy;
}

Cure::~Cure(){}

Cure &Cure::operator=(AMateria const & src)
{
	if (this == &src)
		return (*this);
	return( *this);
}

//  -------------- METHODS ----------------

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
