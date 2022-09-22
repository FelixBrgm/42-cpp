
#ifndef ANIMAL
# define ANIMAL

# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const & copy);

		void operator= (Animal const & src);

		std::string getType ( void ) const;
		virtual void makeSound( void ) const;

		virtual ~Animal();
};

#endif