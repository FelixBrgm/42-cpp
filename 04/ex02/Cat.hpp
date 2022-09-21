
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

		void setIdea(std::string idea, int num);
		std::string getIdea(int num) const;

		void makeSound( void ) const;

		~Cat();
};

#endif