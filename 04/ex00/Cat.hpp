
#ifndef CAT
# define CAT

# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(Animal const & copy);

		void operator= (Animal const & src);

		void makeSound( void ) const;

		virtual ~Cat();
};

#endif