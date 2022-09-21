
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

		void setIdea(std::string idea, int num);
		std::string getIdea( int num) const;

		void makeSound( void ) const;

		~Dog();
};

#endif