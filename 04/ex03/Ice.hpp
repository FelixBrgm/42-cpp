#ifndef ICE
# define ICE

# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(AMateria const & copy);

		Ice &operator=(AMateria const & src);

		AMateria* clone() const;
		void use(ICharacter& target);

		~Ice();
};

#endif