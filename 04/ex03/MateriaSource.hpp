#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria		*materias[4];
		int				materias_learned;
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & copy);

		MateriaSource &operator=(MateriaSource const & src);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

		virtual ~MateriaSource();
};

#endif