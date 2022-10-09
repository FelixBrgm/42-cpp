
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

		Brain		*getBrain( void ) const;
		std::string	getIdea(int idx) const;
		void		setBrain( Brain *new_brain);
		void		setIdea(std::string idea, int idx);

		void makeSound( void ) const;

		virtual ~Cat();
};

#endif