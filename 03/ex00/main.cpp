# include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Fbindere("Fbindere");
	ClapTrap Random;

	Fbindere.attack("Pfuchs");
	Random.attack("Findere");
	Fbindere.takeDamage(10);
	Fbindere.attack("Pfuchs again");
	Fbindere.beRepaired(10);
	Fbindere.attack("Pfuchs");
	std::cout << std::endl;

	ClapTrap	Fabibi("Fabibi");

	for(int i = 0; i < 10; i++)
		Fabibi.attack("somebody");
	Fabibi.attack("\"anybody else\"");

	return (0);
}