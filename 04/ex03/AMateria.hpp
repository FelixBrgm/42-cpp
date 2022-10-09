#ifndef AMATERIA
# define AMATERIA

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	type_;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & copy);

		AMateria &operator= (AMateria const & src);

		const std::string & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;

		virtual ~AMateria();
};

#endif