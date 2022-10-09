
#ifndef DOG
# define DOG

# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(Animal const & copy);

		void operator= (Animal const & src);

		void makeSound( void ) const;

		virtual ~Dog();
};

#endif