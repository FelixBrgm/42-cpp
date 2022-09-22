
#ifndef DOG
# define DOG

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(Dog const & copy);

		void operator= (Dog const & src);

		void makeSound( void ) const;

		~Dog();
};

#endif