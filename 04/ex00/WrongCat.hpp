
#ifndef WRONGCAT
# define WRONGCAT

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongAnimal const & copy);

		void operator= (WrongAnimal const & src);

		~WrongCat();
};

#endif