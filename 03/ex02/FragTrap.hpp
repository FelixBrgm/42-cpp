#ifndef FRAGTRAP
# define FRAGTRAP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:
		
	public:
		FragTrap();
		FragTrap(std::string str);
		FragTrap(FragTrap& copy);

		void operator= (FragTrap const & src);

		void highFivesGuys(void);

		~FragTrap();
};



#endif