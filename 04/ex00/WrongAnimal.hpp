
#ifndef WRONGANIMAL
# define WRONGANIMAL

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const & copy);

		void operator= (WrongAnimal const & src);

		std::string getType ( void ) const;
		void makeSound( void ) const;

		~WrongAnimal();
};

#endif