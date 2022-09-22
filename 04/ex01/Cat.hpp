
#ifndef CAT
# define CAT

# include "Animal.hpp"

class Cat: public Animal
{

	public:
		Cat();
		Cat(Cat const & copy);

		void operator= (Cat const & src);

		void makeSound( void ) const;

		~Cat();
};

#endif