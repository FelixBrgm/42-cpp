#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap Fbindere("Fbindere");
	ScavTrap Fabibi("Fabibi");

	std::cout << "\n Fabibi's data:" << std::endl;
	std::cout << "HP" << Fabibi.get_hp() << std::endl;
	std::cout << "AD" << Fabibi.get_ad() << std::endl;
	std::cout << "EP" << Fabibi.get_ep() << std::endl;

	std::cout << "\n Fabibi attacking until he runs out of energy points:" << std::endl;
	for(int i = 0; i < 50; i++)
	{
		std::cout << "Fabibis EP " << Fabibi.get_ep() << std::endl;
		Fabibi.attack("someone");
	}
	
	std::cout << "\nFabibi using a Claptrap method:" << std::endl;
	Fabibi.beRepaired(100);

	std::cout << "\nFabibi going in Gatekeeper mode:" << std::endl;
	Fabibi.guardGate();

	std::cout << "\nFabibi and Fbindere being destroyed:" << std::endl;
	return (0);
}