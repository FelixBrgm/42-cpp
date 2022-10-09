
#ifndef ANIMAL
# define ANIMAL

# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const & copy);

		void operator= (Animal const & src);
		std::string getType ( void ) const;

		virtual void makeSound( void ) const = 0;

		virtual ~Animal();
};

#endif