
#ifndef DOG
# define DOG

# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog const & copy);

		void operator= (Dog const & src);

		void makeSound( void ) const;

		~Dog();
};

#endif