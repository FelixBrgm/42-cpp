

#ifndef CURE
# define CURE

# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(AMateria const & copy);

		Cure &operator= (AMateria const & copy);

		AMateria* clone() const;
		void use(ICharacter& target);

		~Cure();
};

#endif
