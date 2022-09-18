
#ifndef CAT
# define CAT

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(Cat const & copy);

		void operator= (Cat const & src);

		void makeSound( void ) const;

		~Cat();
};

#endif