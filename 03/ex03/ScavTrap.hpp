#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap( ScavTrap const & copy );
		~ScavTrap();

		void operator = ( ScavTrap const & src );

		void attack( std::string const & target );
		void guardGate();
};

#endif