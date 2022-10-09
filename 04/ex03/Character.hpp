#ifndef CHARACTER
# define CHARACTER

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <vector>

class Character: public ICharacter
{
	protected:
		AMateria*				materias[4];
		AMateria*				unequiped_materias[4];
		int						num_equiped;
		int						num_unequiped;
		std::string				name_;

	public:
		Character();
		Character(std::string name);
		Character(const Character & copy);

		Character &operator= (const Character & src);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void print_materias(void);
		
		~Character();
};

#endif