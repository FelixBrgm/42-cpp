
#include "AMateria.hpp"

//  -------------- CONSTRUCTORS & DESTRUCTOR ----------------
AMateria::AMateria(): type_("") {}

AMateria::AMateria(std::string const & type): type_(type) {}

AMateria::AMateria(AMateria const & copy)
{
	*this = copy;
}

AMateria::~AMateria() {}

AMateria &AMateria::operator= (AMateria const & src)
{
	if (this == &src)
		return(*this);
	return(*this);
}

std::string const & AMateria::getType() const
{
	return (type_);
}

