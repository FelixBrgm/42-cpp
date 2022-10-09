
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

		Brain		*getBrain( void ) const;
		std::string	getIdea(int idx) const;
		void		setBrain( Brain *new_brain);
		void		setIdea(int idx, std::string idea);

		void makeSound( void ) const;

		virtual ~Dog();
};

#endif