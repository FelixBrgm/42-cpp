#ifndef ANIMAL
# define ANIMAL

# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
	private:
		Brain *brain;
	public:
		Animal();
		Animal(Animal const & copy);

		void operator= (Animal const & src);

		std::string getType ( void ) const;
		virtual void makeSound( void ) const;

		virtual ~Animal();
};

#endif