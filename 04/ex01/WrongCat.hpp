
#ifndef WRONGCAT
# define WRONGCAT

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const & copy);

		void operator= (WrongCat const & src);

		~WrongCat();
};

#endif