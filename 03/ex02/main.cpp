
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap Fbindere("Fbindere");
	FragTrap Fabibi("Fabibi");

	std::cout << "\nFragtrap Fabibi's data:" << std::endl;
	std::cout << "HP" << Fabibi.get_hp() << std::endl;
	std::cout << "AD" << Fabibi.get_ad() << std::endl;
	std::cout << "EP" << Fabibi.get_ep() << std::endl;

	std::cout << "\nFragtrap Fabibi attacking until he runs out of energy points:" << std::endl;
	for(int i = 0; i < 100; i++)
	{
		std::cout << "FragTrap Fabibis remaining EP " << Fabibi.get_ep() << std::endl;
		Fabibi.attack("someone");
	}

	std::cout << "\nFragtrap Fabibi using a Claptrap method:" << std::endl;
	Fabibi.beRepaired(100);

	std::cout << "\nFragtrap Fabibi requesting a high five:" << std::endl;
	Fabibi.highFivesGuys();

	std::cout << "\nFragtrap Fabibi and Fbindere being destroyed:" << std::endl;
	return (0);
}
